

TEST = t7


simples : lexico.l sintatico.y utils.c;\
	flex -o lexico.c lexico.l;\
	bison -v -d sintatico.y -o sintatico.c;\
	gcc sintatico.c -o simples

test: simples
	./simples ${TEST}

run: test
	java -jar ../testes/Mars4_5.jar ${TEST}.asm

limpa :  
	rm -f lexico.c sintatico.c sintatico.output *~ sintatico.h simples\