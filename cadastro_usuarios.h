/**
 * @file CadastroCelulares_1.c
 * @author Matheus Hirata Vanzela (matheusvanzela@alunos.utfpr.edu.br)
 *         Vitor Hugo L. A. de Oliveira (vitoroliveira.2021@alunos.utfpr.edu.br)
 * @brief header do cadastro dos usuarios
 * @version 1.0
 * @date 2022-06-08
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef CADASTRO_USUARIOS_H
#define CADASTRO_USUARIOS_H

  /**
   * @brief Essa funcao procura a primeira posicao livre para novo cadastro.
   * Se nao houver, tenta realocar a quantidade de posicoes para cadastros.
   * Fecha o programa se nao ocorrer com sucesso.
   * 
   * @param usuarios 
   * @param quantidade_usuarios 
   */
  void cadastro_usuarios(Cadastros* usuarios, int* quantidade_usuarios);

  /**
   * @brief Essa funcao procura espacos vazios alocados para cadastrar novos usuarios
   * 
   * @param usuarios 
   * @param quantidade_usuarios 
   * @return int (posicao vazia ou -1 para nao existe posicao vazia)
   */
  int encontra_posicao_vazia (Cadastros* usuarios, int* quantidade_usuarios);

  /**
   * @brief Essa funcao realoca a estrutura que guarda os cadastros dos usuarios
   * para uma quantidade multipla de 5
   * 
   * @param usuarios 
   * @param quantidade_usuarios 
   * @return Cadastros* 
   */
  Cadastros* realoca_usuarios (Cadastros* usuarios, int* quantidade_usuarios);

  /**
   * @brief Essa funcao verifica se existe o arquivo contendo a quantidade de 
   * cadastros e os cadastros. Caso nao exista, cria um novo e a quatidade de
   * usuarios sera 0. Se ja existir, a quantidade de usuarios e atualizada para
   * o primeiro inteiro salvo no arquivo. 
   * 
   * @param quantidade_usuarios 
   * @return int quantidade de cadastros. Retorna por mera conveniencia.
   */
  int verifica_arquivo_cadastros (int* quantidade_usuarios);

#endif
