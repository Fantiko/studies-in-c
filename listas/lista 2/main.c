#include "Aluno.h"
#define MAX 3



int main(int argc, char** argv) {
    Aluno* tab[MAX];

    inicializar(MAX, tab);

    leAluno(MAX, tab, 0);
    leAluno(MAX, tab, 1);
    leAluno(MAX, tab, 2);

    imprime_tudo(MAX, tab);

    retiraAluno(MAX, tab, 1);

    imprime_tudo(MAX, tab);





    return 0;
}

