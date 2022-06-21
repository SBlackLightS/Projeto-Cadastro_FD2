/**
 * @file login_usuarios.c
 * @author Matheus Vanzela (matheusvanzela@alunos.utfpr.edu.br)
 *          Vitor Hugo L. A. de Oliveira (vitoroliveira.2021@alunos.utfpr.edu.br)
 * @brief Realiza o login dos usuarios
 * @version 0.1
 * @date 13-06-2022
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "includes_sistema.h"
#include "login_usuarios.h"
#include "struct_usuarios.h"
#include "cripto.h"
#include "interfaces.h"

void login_usuarios()
{
  int tentar_novamente = 0;
  char nome_usuario[TAM_NOME];
  char senha_usuario[PS_USER];
  int chave;

  do {
    printf("Usuario(%d): ",TAM_NOME - 2);
    fgets(nome_usuario, TAM_NOME, stdin);
    nome_usuario[strcsnp(nome_usuario,"\n")] = '\0';
    setbuf(stdin,NULL);

    printf("Senha(%d): ",PS_USER - 2);
    fgets(senha_usuario, PS_USER, stdin);
    senha_usuario[strcsnp(senha_usuario,"\n")] = '\0';
    setbuf(stdin,NULL);

    printf("Chave: ")
  } while();
  return;
}