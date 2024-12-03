/*+----------------------------------------------------------------+
  |           UNIFAL - Universidade Federal de Alfenas.            |
  |           BACHARELADO EM CIÊNCIAS DA COMPUTAÇÃO.               |
  |                                                                |
  |  Trabalho..: Geracao de codigo MIPS                             |
  |  Disciplina: Compiladores                                      |
  |  Professor.: Luiz Eduardo da Silva                             |
  |  Aluno.....: Rodrigo Luís Gasparino Lucatelli                  |
  |  Data......: 05/11/2024                                        |
  +----------------------------------------------------------------+*/

// Tabela de Simbolos

// #include <stdlib.h>
// #include <stdio.h>

int yyerror(char *);
FILE *yyout;

enum
{
    INT,
    LOG,
    LIT
};

#define TAM_TAB 100

struct elemTabSimbolos
{
    char id[100]; // nome do identificador
    int end;      // endereco
    int tip;      // tipo
} tabSimb[TAM_TAB], elemTab;

int posTab = 0;

int buscaSimbolo(char *s)
{
    int i;
    for (i = posTab; strcmp(tabSimb[i].id, s) && i >= 0; i--)
        ;
    if (i == -1)
    {
        char msg[200];
        sprintf(msg, "Identificador [%s] não encontrado!", s);
        yyerror(msg);
    }
    return i;
}

void insereSimbolo(struct elemTabSimbolos elem)
{
    int i;
    if (posTab == TAM_TAB)
        yyerror("Tabela de Simbolos cheia!");
    for (i = posTab - 1; strcmp(tabSimb[i].id, elem.id) && i >= 0; i--)
        ;

    if (i != -1)
    {
        char msg[200];
        sprintf(msg, "Identificador [%s] duplicado", elem.id);
        yyerror(msg);
    }
    tabSimb[posTab++] = elem;
}

// Pilha semantica

#define TAM_PIL 100
int pilha[TAM_PIL];
int topo = -1;

void empilha(int valor)
{
    if (topo == TAM_PIL)
    {
        yyerror("Pilha Semantica cheia");
    }
    pilha[++topo] = valor;
}

int desempilha(void)
{
    if (topo == -1)
    {
        yyerror("Pilha Semantica vazia!");
    }
    return pilha[topo--];
}

void testaTipo(int tipo1, int tipo2, int ret)
{
    int t1 = desempilha();
    int t2 = desempilha();
    if (t1 != tipo1 || t2 != tipo2)
        yyerror("Imcopatibilidade de tipo!");
    empilha(ret);
}

// Remove aspas de uma String

void removeAspas(char *str)
{
    char *src = str, *dst = str;
    while (*src)
    {
        if (*src != '"')
        {
            *dst++ = *src;
        }
        src++;
    }
    *dst = '\0';
}

// Armazenamento de variáveis para o .data

struct data
{
    char nome[50];
    char tipo[50];
    char valor[255];
} tabelaVariaveis[100], constante, espaco, enter, newVar;

int posTabVar = 0;
int numConstante = 0;

void iniciaTabelaVariaveis()
{
    strcpy(espaco.nome, "_esp");
    strcpy(espaco.tipo, ".asciiz");
    strcpy(espaco.valor, "\" \"");
    strcpy(enter.nome, "_ent");
    strcpy(enter.tipo, ".asciiz");
    strcpy(enter.valor, "\"\n\"");

    tabelaVariaveis[posTabVar++] = espaco;
    tabelaVariaveis[posTabVar++] = enter;
    
}

char *armazenaVar(struct elemTabSimbolos var, char *valor)
{

    if (var.tip >= 2)
    {
        // É uma String
        char tempConst[10] = "_const";
        char tam[4];
        numToChar(numConstante++, tam);
        strcat(tempConst, tam);
        strcpy(newVar.nome, tempConst);
        strcpy(newVar.tipo, ".asciiz");
        char tmp[280] = "\"";
        strcat(tmp, valor);
        strcat(tmp, "\"");
        strcpy(newVar.valor, tmp);
    }
    else
    {
        // É lógico ou inteiro
        strcpy(newVar.nome, var.id);
        strcpy(newVar.tipo, ".word");
        strcpy(newVar.valor, "1");
    }

    tabelaVariaveis[posTabVar++] = newVar;
    return newVar.nome;
}

void dumpTabelaVar()
{
    fprintf(yyout, ".data\n");
    for (int i = 0; i < posTabVar; i++) for (int i = 0; i < posTabVar; i++)
        fprintf(yyout, "\t%s: %s %s\n", tabelaVariaveis[posTabVar].nome, tabelaVariaveis[posTabVar].tipo, tabelaVariaveis[posTabVar].valor);
}

void numToChar(int value, char *str)
{
    // value = 135
    char temp;
    int i = 0;
    while (value > 0)
    {
        int digito = value % 10;

        str[i] = digito + '0';
        value /= 10;
        i++;
    }
    i = 0;
    int j = strlen(str) - 1;

    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}

