/*+----------------------------------------------------------------+
  |           UNIFAL - Universidade Federal de Alfenas.            |
  |           BACHARELADO EM CIÊNCIAS DA COMPUTAÇÃO.               |
  |                                                                |
  |  Trabalho..:Geracao de codigo MIPS                             |
  |  Disciplina: Compiladores                                      |
  |  Professor.: Luiz Eduardo da Silva                             |
  |  Aluno.....: Rodrigo Luís Gasparino Lucatelli                  |
  |  Data......: 05/11/2024                                        |
  +----------------------------------------------------------------+*/

// Tabela de Simbolos
#include "sintatico.y"

int yyerror(char *);

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

//Remove aspas de uma String

void removeAspas(char* str){
    char *src = str, *dst = str;
    while (*src) {
        if (*src != '"') {
            *dst++ = *src;
        }
        src++;
    }
    *dst = '\0';
}

// Armazenamento de variáveis para o .data

struct data
{
    char[50] nome; 
    char[50] tipo;
    char[255] valor;
} tabelaVariaveis[100], constante;

int posTabVar = 0;
int numConstante = 0;


void iniciaTabelaVariaveis(){
    struct data espaco, enter;
    strcpy(espaco.nome, "_esp");
    strcpy(espaco.tipo, ".asciiz");
    strcpy(espaco.valor, "\" \"");
    strcpy(enter.nome, "_ent");
    strcpy(enter.tipo, ".asciiz");
    strcpy(enter.valor, "\"\n\"");

    tabelaVariaveis[0] = espaco;
    tabelaVariaveis[1] = enter;
    posTabVar = 2;
}


void armazenaVar(struct elemTabSimbolos var, char *valor)
{
    struct data newVar;
   
    if (var.tip >= 2)
    {
        // É uma String
        char tempConst[10] = "_const";
        char charConst[3] = ""
        strcat(tempConst, itoa(numConstante++, charConst))
        strcpy(newVar.nome, tempConst);
        strcpy(newVar.tipo, ".asciiz");
        char tmp[280] = "\"";
        strcat(tmp, valor)
        strcat(tmp, "\"")
        strcpy(newVar.valor, tmp);

    } else {
        // É lógico ou inteiro
        strcpy(newVar.nome, var.id);
        strcpy(newVar.tipo, ".word");
        strcpy(newVar.valor, "1");
    }

    tabelaVariaveis[posTabVar++] = newVar;

}

void dumpTabelaVar(){
    for (int i = 0; i < posTabVar ; i++)
        fprintf(yyout, "%s: %s %s", posTabVar[i].nome, posTabVar[i].tipo, posTabVar[i].valor);
    
    
}

char *itoa ( int value, char * str )
{
    char temp;
    int i =0;
    while (value > 0) {
        int digito = value % 10;

        str[i] = digito + '0';
        value /= 10;
        i++;

    }
   i = 0;
   int j = strlen(str) - 1;

   while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }
    return str;


}