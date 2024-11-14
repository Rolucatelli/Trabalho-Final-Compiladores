simples : lexico.l sintatico.y utils.c;\
	flex -t lexico.l > lexico.c;\
	bison -v -d sintatico.y -o sintatico.c;\
	gcc sintatico.c -o simples

run: simples
	./simples teste1
	gcc -o mvs mvs.c
	./mvs teste1

limpa :  
	rm -f lexico.c sintatico.c sintatico.output *~ sintatico.h simples\