/**
 * @file struct_usuarios.h
 * @author Matheus Vanzela (matheusvanzela@alunos.utfpr.edu.br)
 *          Vitor Hugo L. A. de Oliveira (vitoroliveira.2021@alunos.utfpr.edu.br)
 * @brief header para a struct contendo a struct para cadastro e login
 * @version 0.1
 * @date 14-06-2022
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef STRUCT_USUARIOS_H
#define STRUCT_USUARIOS_H

#define TAM_NOME 47
#define PS_USER 17

typedef struct  {
  char nome_usuario[TAM_NOME]; //ate 45
  char senha_usuario[PS_USER]; //ate 15
  int chave; //chave = 0 -> struct vazia
}Cadastros;

#endif