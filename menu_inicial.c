/**
 * @file menu.c
 * @author Matheus Vanzela (matheusvanzela@alunos.utfpr.edu.br)
 *          Vitor Hugo L. A. de Oliveira (vitoroliveira.2021@alunos.utfpr.edu.br)
 * @brief menu do programa
 * @version 0.1
 * @date 14-06-2022
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "includes.h"
#include "interfaces.h"
#include "struct_usuarios.h"
#include "cadastro_usuarios.h"

void menu_inicial(Cadastros *usuarios)
{
    int opcao1;

    printf("Selecione uma op‡Æo:\n");
    printf("1 - Cadastro\n");
    printf("2 - Login\n");

    scanf("%d", &opcao1);

    switch (opcao1)
    {
    case 1:
        limpatela();
        cadastro_usuarios(usuarios);
        break;
    
    case 2:
        /* code */
        break;
    
    default:
            printf("!!! UMA OP€ÇO INVµLIDA FOI SELECIONADA !!!\n");
        break;
    }

    return;
}