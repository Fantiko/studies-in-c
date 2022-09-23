//
// Created by kaios on 21/05/2022.
//

#ifndef ESTRUTURA_DE_DADOS_ALUNO_H
#define ESTRUTURA_DE_DADOS_ALUNO_H

typedef struct aluno Aluno;

void inicializar(int n , Aluno** tab);

void leAluno(int n, Aluno** tab, int i);

void imprimeAluno(int n, Aluno** tab,int i);

void retiraAluno(int n,Aluno** tab, int i);

void imprime_tudo(int n,Aluno** tab);



#endif //ESTRUTURA_DE_DADOS_ALUNO_H
