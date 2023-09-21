#include "aluno.h"
#include <stdio.h>

tAluno LeAluno()
{
    tAluno aluno;
    scanf ("%s", aluno.nome);
    scanf ("%d", &aluno.matricula);
    scanf ("%d %d %d", &aluno.n1, &aluno.n2, &aluno.n3);
    scanf ("%*[^\n]");
    return aluno;
}

int ComparaMatricula(tAluno aluno1, tAluno aluno2)
{
    if (aluno1.matricula > aluno2.matricula)
        return 1;
    else if (aluno1.matricula < aluno2.matricula)
        return -1;
    return 0;
}

int CalculaMediaAluno(tAluno aluno)
{
    int media;
    media = (aluno.n1 + aluno.n2 + aluno.n3)/3;
    return media;
}

int VerificaAprovacao(tAluno aluno)
{
    if (CalculaMediaAluno(aluno) >= 7)
        return 1;
    return 0;
}

void ImprimeAluno(tAluno aluno)
{
    printf ("%s\n", aluno.nome);
}