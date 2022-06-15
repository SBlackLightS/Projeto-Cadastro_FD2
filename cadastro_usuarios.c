/**
 * @file CadastroCelulares_1.c
 * @author Matheus Hirata Vanzela (matheusvanzela@alunos.utfpr.edu.br)
 *         Vitor Hugo L. A. de Oliveira (vitoroliveira.2021@alunos.utfpr.edu.br)
 * @brief Realiza o cadastro dos usu rios
 * @version 1.0
 * @date 2022-06-08
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "includes_sistema.h"
#include "cadastro_usuarios.h"
#include "struct_usuarios.h"
#include "cripto.h"

Cadastros *cadastro_usuarios(Cadastros *usuarios)
{
    
    fgets(usuarios->nome_usuario, TAM_NOME, stdin);
    usuarios->nome_usuario[stdcspn(usuarios->nome_usuario, "\n")] = '\0';
    setbuf(stdin, NULL);

    printf("Digite sua senha:");
    fgets(usuarios->senha_usuario, PS_USER, stdin);
    usuarios->senha_usuario[strcspn(usuarios->senha_usuario, "\n")] = '\0';
    setbuf(stdin, NULL);

    FILE *arquivo_cadastros = fopen("arquivo_cadastros.dat", "ab");

    cripto(usuarios->nome_usuario);
    fwrite(usuarios->nome_usuario, sizeof(char), TAM_NOME, arquivo_cadastros);

    cripto(usuarios->senha_usuario);
    fwrite(usuarios->senha_usuario, sizeof(char), PS_USER, arquivo_cadastros);

    fclose(arquivo_cadastros);
    
    limpatela();

    return;
}