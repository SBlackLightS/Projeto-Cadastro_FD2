/**
 * @file submenu_inserir.c
 * @author Matheus Vanzela (matheusvanzela@alunos.utfpr.edu.br)
 *          Vitor Hugo L. A. de Oliveira (vitoroliveira.2021@alunos.utfpr.edu.br)
 * @brief submenu para a fun‡Æo que insere novas marcas e celulares
 * @version 0.1
 * @date 15-06-2022
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "includes_sistema.h"
#include "interfaces.h"
#include "structs_cadastros.h"

void submenu_inserir()
{
  int opcao;
  int repete = 1;

  do
  {

    printf("Selecione uma Opcao:\n");
    printf("1 - Inserir Marca\n");
    printf("2 - Inserir Celular\n");
    printf("3 - Retornar ao Menu\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
      case 1:
        limpa_tela();
        inserir_marca();
      break;

      case 2:
        limpa_tela();
        inserir_celular();
      break;

      case 3:
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