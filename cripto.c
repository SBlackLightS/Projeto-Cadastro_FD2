/**
 * @file cripto.h
 * @author Matheus Vanzela (matheusvanzela@alunos.utfpr.edu.br)
 *          Vitor Hugo L. A. de Oliveira (vitoroliveira.2021@alunos.utfpr.edu.br)
 * @brief header do arquivo de criptografia
 * @version 0.1
 * @date 31-05-2022
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "cripto.h"

void cifra_de_cesar(char *senha, int chave)
{
  while (senha != '\0')
  {
    *senha = (*senha) + chave;
    senha++;
  }
}