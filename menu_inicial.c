/**
 * @file menu_inicial.c
 * @author Matheus Vanzela (matheusvanzela@alunos.utfpr.edu.br)
 *          Vitor Hugo L. A. de Oliveira (vitoroliveira.2021@alunos.utfpr.edu.br)
 * @brief menu de login e cadastro do programa
 * @version 0.1
 * @date 14-06-2022
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "includes_sistema.h"
#include "interfaces.h"
#include "login_usuarios.h"
#include "struct_usuarios.h"
#include "cadastro_usuarios.h"

void menu_inicial(Cadastros *usuarios)
{
  int opcao;
  int repete;

  printf("Selecione uma op‡Æo:\n");
  printf("1 - Cadastro\n");
  printf("2 - Login\n");

  scanf("%d", &opcao);

  do
  {
    repete = 0;

    switch (opcao)
    {
      case 1:
        limpa_tela();
        cadastro_usuarios(usuarios);
        repete = 1;
      break;

      case 2:
        limpa_tela();
        login_usuarios(usuarios);
      break;

      default:
        printf("!!! UMA OPCAO INVALIDA FOI SELECIONADA !!!\n");
        //sleep(2000);
        repete = 1;
      break;

      }// switch

  } while (repete == 1);

  return;
}