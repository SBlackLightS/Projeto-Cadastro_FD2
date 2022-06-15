/**
 * @file CadastroCelulares_1.c
 * @author Matheus Hirata Vanzela (matheusvanzela@alunos.utfpr.edu.br)
 *         Vitor Hugo L. A. de Oliveira (vitoroliveira.2021@alunos.utfpr.edu.br)
 * @brief Projeto de cadastro de marcas e celulares
 * @version 1.0
 * @date 2022-06-08
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "includes_sistema.h"
#include "menu_inicial.h"
#include "menu_principal.h"
#include "cadastro_usuarios.h"
#include "struct_usuarios.h"
#include "structs_cadastros.h"


void main()
{
  /* Declaracoes: -------------------------------------------------------------- */
  int quantidade_usuarios = 0;
  Cadastros* usuarios;
  /* Declaracoes =============================================================== */

  quantidade_usuarios = verifica_arquivo_cadastros(&quantidade_usuarios);

  menu_inicial(usuarios);
  
  return 0;
}//main