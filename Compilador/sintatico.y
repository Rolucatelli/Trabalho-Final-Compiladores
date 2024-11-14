/*+----------------------------------------------------------------+
  |           UNIFAL - Universidade Federal de Alfenas.            |
  |           BACHARELADO EM CIÊNCIAS DA COMPUTAÇÃO.               |
  |                                                                |
  |  Trabalho..:Geracao de codigo MIPS                             |
  |  Disciplina: Compiladores                                      |
  |  Professor.: Luiz Eduardo da Silva                             |
  |  Aluno.....: Rodrigo Luís Gasparino Lucatelli                  |
  |  Data......: 27/11/2024                                        |
  +----------------------------------------------------------------+*/

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.c"
#include "lexico.c"

int contaVar = 0;
int rotulo = 0;
int tipo;

%}


%token T_PROGRAMA
%token T_INICIO
%token T_FIMPROG
%token T_LEIA
%token T_ESCREVA
%token T_SE
%token T_ENTAO
%token T_SENAO
%token T_FIMSE
%token T_ENQUANTO
%token T_FACA
%token T_FIMEQNTO

%token T_MAIS
%token T_MENOS
%token T_VEZES
%token T_DIV

%token T_MAIOR
%token T_MENOR
%token T_IGUAL

%token T_E
%token T_OU
%token T_NAO

%token T_ATRIB
%token T_ABRE
%token T_FECHA

%token T_INTEIRO
%token T_LOGICO
%token T_LITERAL
%token T_V
%token T_F

%token T_IDENTIF
%token T_NUMERO

%start programa

%left T_MAIS T_MENOS
%left T_VEZES T_DIV
%left T_MAIOR T_MENOR T_IGUAL
%left T_E T_OU


%%

programa 
    : cabecalho
    { 
        fprintf(yyout, "\tINPP\n");
    }
     variaveis 
    { 
        fprintf(yyout, "\tAMEM\t%d\n", contaVar); 
        empilha(contaVar);
    }
     T_INICIO lista_comandos T_FIMPROG
    {
        int conta = desempilha(); 
        fprintf(yyout, "\tDMEM\t%d\n\tFIMP\n", conta); 
    }
    ;

cabecalho 
    : T_PROGRAMA T_IDENTIF
    ;

variaveis
    :   /* nada */
    | declaracao_variaveis
    ;

declaracao_variaveis
    : tipo lista_variaveis declaracao_variaveis
    | tipo lista_variaveis
    ;

tipo
    : T_INTEIRO { tipo = INT; }
    | T_LOGICO  { tipo = LOG; }
    ;

lista_variaveis
    : lista_variaveis T_IDENTIF 
    { 
        strcpy(elemTab.id, atomo);
        elemTab.end = contaVar++;
        elemTab.tip = tipo;
        insereSimbolo(elemTab);
    }
    | T_IDENTIF                 
    { 
        strcpy(elemTab.id, atomo);
        elemTab.end = contaVar++;
        elemTab.tip = tipo;
        insereSimbolo(elemTab);
    }
    ;

lista_comandos
    : lista_comandos comando
    | comando
    | /* nada */
    ;

comando
    : leitura
    | escrita
    | repeticao
    | selecao
    | atribuicao
    ;

leitura
    : T_LEIA T_IDENTIF 
    { 
        int pos = buscaSimbolo(atomo);
        fprintf(yyout, "\tLEIA\n"); 
        fprintf(yyout, "\tARZG\t%d\n", tabSimb[pos].end); 
    }
    ;

escrita
    : T_ESCREVA expressao
    { 
        int tipo = desempilha();
        fprintf(yyout, "\tESCR\n"); 
    }
    | T_ESCREVA T_LITERAL
    {
        fprintf(yyout, "\tESCR\t%s\n", atomo);
    }
    ;

repeticao
    : T_ENQUANTO 
    {
        fprintf(yyout, "L%d\tNADA\n", ++rotulo);
        empilha(rotulo);
    }
     expressao T_FACA 
    {
        int tipo = desempilha();
        if(tipo != LOG)
            yyerror("Incompatibilidade de tipos na repeticao");
        fprintf(yyout, "\tDSVF\tL%d\n", ++rotulo);
        empilha(rotulo);
    }
     lista_comandos T_FIMEQNTO
    {
            int y = desempilha();
            int x = desempilha();
            fprintf(yyout, "\tDSVS\tL%d\nL%d\tNADA\n", x, y);
    }
    ;

selecao
    : T_SE expressao T_ENTAO 
    {
        int tipo = desempilha();
        if(tipo != LOG)
            yyerror("Incompatibilidade de tipos na selecao");
        fprintf(yyout, "\tDSVF\tL%d\n", ++rotulo);
        empilha(rotulo);
    } lista_comandos T_SENAO 
    {
        int x = desempilha();
        fprintf(yyout, "\tDSVS\tL%d\nL%d\tNADA\n", ++rotulo, x);
        empilha(rotulo);
    }
    lista_comandos T_FIMSE
    {
        int x = desempilha();
        fprintf(yyout, "L%d\tNADA\n", x);
    }
    ;

atribuicao
    : T_IDENTIF
    { 
        int pos = buscaSimbolo(atomo);
        empilha(pos);
    }
     T_ATRIB expressao
    {
        int tipo = desempilha();
        int pos = desempilha();
        if(tipo != tabSimb[pos].tip)
            yyerror("Incompatibilidade de tipos");
        fprintf(yyout, "\tARZG\t%d\n", tabSimb[pos].end);
    }
    ;

expressao
    : expressao T_MAIS expressao    
    {
        testaTipo(INT, INT, INT); 
        fprintf(yyout, "\tSOMA\n"); 
    }
    | expressao T_MENOS expressao   
    {
        testaTipo(INT, INT, INT); 
        fprintf(yyout, "\tSUBT\n"); 
    }
    | expressao T_VEZES expressao   
    {
        testaTipo(INT, INT, INT); 
        fprintf(yyout, "\tMULT\n"); 
    }
    | expressao T_DIV expressao     
    {
        testaTipo(INT, INT, INT); 
        fprintf(yyout, "\tDIVI\n"); 
    }
    | expressao T_MAIOR expressao   
    {
        testaTipo(INT, INT, LOG); 
        fprintf(yyout, "\tCMMA\n"); 
    }
    | expressao T_MENOR expressao   
    {
        testaTipo(INT, INT, LOG); 
        fprintf(yyout, "\tCMME\n"); 
    }
    | expressao T_IGUAL expressao   
    {
        testaTipo(INT, INT, LOG); 
        fprintf(yyout, "\tCMIG\n"); 
    }
    | expressao T_E expressao       
    {
        testaTipo(LOG, LOG, LOG); 
        fprintf(yyout, "\tCONJ\n"); 
    }
    | expressao T_OU expressao      
    {
        testaTipo(LOG, LOG, LOG); 
        fprintf(yyout, "\tDISJ\n"); 
    }
    | termo
    ;

termo
    : T_NUMERO      
    { 
        fprintf(yyout, "\tCRCT\t%s\n", atomo); 
        empilha(INT);

    }
    | T_IDENTIF     
    { 
        int pos = buscaSimbolo(atomo);
        fprintf(yyout, "\tCRVG\t%d\n", tabSimb[pos].end); 
        empilha(tabSimb[pos].tip);
    }
    | T_V           
    { 
        fprintf(yyout, "\tCRVG\t1\n"); 
        empilha(LOG);
    }
    | T_F           
    {
        fprintf(yyout, "\tCRVG\t0\n");
        empilha(LOG);
    }
    | T_NAO termo   
    {
        int x = desempilha();
        if(x != LOG)
            yyerror("Incompatibilidade de tipos");
        fprintf(yyout, "\tNEGA\n");
        empilha(LOG);
    }
    | T_ABRE expressao T_FECHA
    ;




%%

int main (int argc, char *argv[]) {
    char nameIn[30], nameOutMvs[30], nameOutMips[30],  *p;
    if(argc < 2) {
        printf("Use:\n\t%s <arquivo>[.simples]\n\n", argv[0]);
        return 10;
    }
    p = strstr(argv[1], ".simples");
    if(p) *p = '\0';
    
    // Definindo o caminho dos arquivos de entrada e saída



    strcpy(nameIn, argv[1]);
    strcpy(nameOutMvs, argv[1]);
    strcpy(nameOutMips, argv[1]);
    strcat(nameIn, ".simples");
    strcat(nameOutMvs, ".mvs");
    strcat(nameOutMips, ".abs");
    yyin = fopen(nameIn, "r");
    yyout = fopen(nameOutMvs, "w");
    /* yyout = fopen(nameOutMips, "w"); */
    if (!yyin) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }
    yyparse();
    return 0;
}