

#ifndef STRUCT_USUARIOS_H
#define STRUCT_USUARIOS_H

#define TAM_NOME 47
#define PS_USER 17

typedef struct  {
  char nome_usuario[TAM_NOME]; //ate 45
  char senha_usuario[PS_USER]; //ate 15
}Cadastro;

#endif
