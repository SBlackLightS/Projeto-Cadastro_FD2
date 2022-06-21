/**
 * @file menu_principal.c
 * @author Matheus Vanzela (matheusvanzela@alunos.utfpr.edu.br)
 *         Vitor Hugo L. A. de Oliveira (vitoroliveira.2021@alunos.utfpr.edu.br)
 * @brief menu principal do programa
 * @version 0.1
 * @date 14-06-2022
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "includes_sistema.h"
#include "interfaces.h"
#include "structs_cadastros.h"

void menu_principal()
{
  int opcao;
  int repete = 1;

  do
  {
    printf("Selecione uma Opcao:\n");
    printf("1 - Inserir\n");
    printf("2 - Remover Celular\n");
    printf("3 - Listar\n");
    printf("4 - Pesquisar\n");
    printf("5 - Exportar arquivo .csv\n");
    printf("6 - Sair");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
      case 1:
        limpa_tela();
        submenu_inserir();
      break;

      case 2:
        limpa_tela();
        remover_celular();
      break;

      case 3:
        limpa_tela();
        submenu_listar();
      break;

      case 4:
        limpa_tela();
        submenu_pesquisar();
      break;

      case 5:
        limpa_tela();
        exportar_arquivo();
      break;

      case 6:
        repete = 0;
      break;
    
      default:
        printf("!!! UMA OPCAO INVALIDA FOI SELECIONADA !!!\n");
        //sleep(2000);
      break;

    }//switch

  } while (repete == 1);
  
  return;
}