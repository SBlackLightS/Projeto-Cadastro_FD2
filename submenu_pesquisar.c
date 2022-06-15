/**
 * @file submenu_pesquisar.c
 * @author Matheus Vanzela (matheusvanzela@alunos.utfpr.edu.br)
 *          Vitor Hugo L. A. de Oliveira (vitoroliveira.2021@alunos.utfpr.edu.br)
 * @brief sumbenu para pesquisar pela marca ou celular
 * @version 0.1
 * @date 15-06-2022
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "includes_sistema.h"
#include "interfaces.h"
#include "structs_cadastros.h"

void submenu_pesquisar()
{
  int opcao;
  int repete = 1;

  do
  {

    printf("Selecione uma Opcao:\n");
    printf("1 - Pesquisar Marca\n");
    printf("2 - Pesquisar Celular\n");
    printf("3 - Retornar ao Menu\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
      case 1:
        limpa_tela();
        pesquisar_marca();
      break;

      case 2:
        limpa_tela();
        pesquisar_celular();
      break;

      case 3:
        limpa_tela();
        repete = 0;
      break;
    
      default:
        printf("!!! UMA OPCAO INVALIDA FOI SELECIONADA !!!\n");
        //sleep(2000);
      break;
    }// switch

  } while (repete ==1);
  
  return;
}