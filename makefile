CadastroCelulares_1 : CadastroCelulares_1.o
	@echo "Gerando o arquivo executável"
	gcc *.o -o CadastroCelulares_1

CadastroCelulares_1.o: CadastroCelulares_1.c
	@echo "Compilando *.c e gerando os objetos"
	gcc -c CadastroCelulares_1.c

#funcoes.o: funcoes.c
#	@echo "Compilando e gerando as funções"
#	gcc -c funcoes.c

clean:
	@echo "Apagando objetos executáveis antigos"
	rm -f *.o CadastroCelulares_1

run:
	./CadastroCelulares_1