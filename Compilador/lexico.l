/*+----------------------------------------------------------------+
  |           UNIFAL - Universidade Federal de Alfenas.            |
  |           BACHARELADO EM CIÊNCIAS DA COMPUTAÇÃO.               |
  |                                                                |
  |  Trabalho..: Geracao de codigo MIPS                            |
  |  Disciplina: Compiladores                                      |
  |  Professor.: Luiz Eduardo da Silva                             |
  |  Aluno.....: Rodrigo Luís Gasparino Lucatelli                  |
  |  Data......: 05/11/2024                                        |
  +----------------------------------------------------------------+*/

%{
#include "sintatico.h"
char atomo[100];
int yyerror(char *);
int numLinha = 1;
%}


identificador [a-zA-Z]([a-zA-Z0-9])*
numero [0-9]+
espaco [ \t\r]*
novalinha [\n]
literal \"[^\"]*\"


%%
programa                { return T_PROGRAMA; }
inicio                  { return T_INICIO; }
fimprograma             { return T_FIMPROG; }
leia                    { return T_LEIA; }
escreva                 { return T_ESCREVA; }
se                      { return T_SE; }
entao                   { return T_ENTAO; }
senao                   { return T_SENAO; }
fimse                   { return T_FIMSE; }
enquanto                { return T_ENQUANTO; }
faca                    { return T_FACA; }
fimenquanto             { return T_FIMEQNTO; }

"+"                     { return T_MAIS; }
"-"                     { return T_MENOS; }
"*"                     { return T_VEZES; }
div                     { return T_DIV; }

">"                     { return T_MAIOR; }
"<"                     { return T_MENOR; }
"="                     { return T_IGUAL; }

e                       { return T_E; }
ou                      { return T_OU; }
nao                     { return T_NAO; }

"<-"                    { return T_ATRIB; }
"("                     { return T_ABRE; }
")"                     { return T_FECHA; }

inteiro                 { return T_INTEIRO; }
logico                  { return T_LOGICO; }
V                       { return T_V; }
F                       { return T_F; }

{identificador}         { strcpy(atomo, yytext); return T_IDENTIF; }
{numero}                { strcpy(atomo, yytext); return T_NUMERO; }
{espaco}                /* nada */
{novalinha}             numLinha++;
{literal}               { strcpy(atomo, yytext); return T_LITERAL; }


.                       yyerror("léxico - símbolo desconhecido!");
%%



int yywrap() { return 1;}

int yyerror(char *s) {
    printf("Erro na linha %d: %s\n", numLinha, s);
    exit(100);
}

