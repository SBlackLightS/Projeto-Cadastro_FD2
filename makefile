CadastroCelulares_1 : CadastroCelulares_1.o interfaces.o cadastro_usuarios.o
	@echo "Gerando o arquivo executavel"
	gcc *.o -o CadastroCelulares_1

CadastroCelulares_1.o: CadastroCelulares_1.c
	@echo "Compilando *.c e gerando os objetos"
	gcc -c CadastroCelulares_1.c

interfaces.o: interfaces.c
	@echo "Compilando e gerando as interfaces"
	gcc -c interfaces.c

cadastro_usuarios.o: cadastro_usuarios.c
	@echo "Compilar e gerar cadastro_usuarios"
	gcc -c cadastro_usuarios.c

clean:
	@echo "Apagando objetos executaveis antigos"
	rm -f *.o CadastroCelulares_1

run:
	./CadastroCelulares_1