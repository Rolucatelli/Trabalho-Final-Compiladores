simples : lexico.l sintatico.y utils.c;
	flex -o lexico.c lexico.l;
	bison -v -d sintatico.y -o sintatico.c;
	gcc sintatico.c -o simples

run: simples
	./simples ../testes/t1
	gcc -o mvs mvs.c
	java -jar ../testes/Mars4_5.jar t1.asm

limpa :  
	rm -f lexico.c sintatico.c sintatico.output *~ sintatico.h simples\