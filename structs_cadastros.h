/**
 * @file structs.h
 * @author Matheus Vanzela (matheusvanzela@alunos.utfpr.edu.br)
 *         Vitor Hugo L. A. de Oliveira (vitoroliveira.2021@alunos.utfpr.edu.br)
 * @brief Structs a serem utilizadas no projeto
 * @version 0.1
 * @date 13-06-20TAM_PADRAO
 *
 * @copyright Copyright (c) 20TAM_PADRAO
 *
 */

#ifndef STRUCTS_CADASTROS_H
#define STRUCTS_CADASTROS_H

#define TAM_NOME 47
#define TAM_PADRAO 22

typedef struct
{ // 3
  char nome_chipset[TAM_PADRAO];
  char gpu[TAM_PADRAO];
  float frequencia_max;
} Processador;

typedef struct
{ // 2
  Processador processador[TAM_NOME];
  int mem_interna;
  int mem_ram;
} Dados_Tecnicos;

typedef struct
{ // 5
  int id;
  char nome_celular[TAM_NOME];
  char nome_marca[TAM_PADRAO];
  Dados_Tecnicos dados_tecnicos;
  int capacidade_bateria;
  float Preco;
} Celular;

typedef struct
{ // 2
  char marca[TAM_PADRAO];
  char **celulares;
} Marca;

#endif