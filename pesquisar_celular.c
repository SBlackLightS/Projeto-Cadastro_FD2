/**
 * @file pesquisar.c
 * @author Matheus Vanzela (matheusvanzela@alunos.utfpr.edu.br)
 *         Vitor Hugo L. A. de Oliveira (vitoroliveira.2021@alunos.utfpr.edu.br)
 * @brief Fun‡Æo que realiza a pesquisa pelo celular
 * @version 0.1
 * @date 18-06-2022
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "includes_sistema.h"
#include "interfaces.h"
#include "structs_cadastros.h"

void pesquisar_celular()
{

  int opcao;
  int repete = 1;
  int tamanho;
  int posicao;
  char *resultado;
  char nome[TAM_NOME];
  char marca[TAM_NOME];
  Celular celular_pesquisado;

  /**
   * @brief Abre o arquivo contendo as structs dos celulares cadastrados.
   *
   *
   */
  FILE *celulares = fopen("celulares.dat", "ab");
  if (celulares == NULL)
  {
    printf("Erro ao abrir o arquivo!!\n");
    exit(1);
  }

  int tamanho_arquivo()
  {
    long ftell(celulares);

    return (ftell(celulares) / sizeof(/**struct dos celulares*/));
  }

  /**
   * @brief DO/WHILE para realiza‡Æo da pesquisa
   *
   */
  do
  {
    ptintf("1 - Pesquisar pelo nome\n");
    printf("2 - Pesquisar pela marca\n");
    printf("3 - Encerrar pesquisa\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      printf("Digite o nome do celular:");
      fgets(nome, TAM_NOME, stdin);
      nome[strcspn(nome, "\n")] = '\0';
      setbuf(stdin, NULL);

      for (size_t i = 0; i < tamanho; i++)
      {
        resultado = strstr(celulares[i].nome_celular, nome);
        posicao++;
      } // for para buscar o celular pelo nome

      fseek(celulares, posicao, SEEK_SET);

      fread(celular_pesquisado, sizeof(Celular), 1, celulares);

      break;

    default:
      break;
    }

  } while (repete = 1);
}
