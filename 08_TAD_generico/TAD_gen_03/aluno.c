#include "aluno.h"
#include <stdlib.h>
#include <stdio.h>

struct Aluno
{
    float nota;
    char *nome;
    char genero;
};


tAluno *CriaAluno()
{
    tAluno* aluno = (tAluno*) malloc (sizeof (tAluno));
    aluno->nota = -1;
    aluno->nome = NULL;
    aluno->genero = '\0';
    return aluno;
}


void DestroiAluno(data_type aluno)
{
    tAluno* alunoo = aluno
    free((tAluno *)aluno);
}


void LeAluno(tAluno *aluno)
{
    scanf ("%s;%c;%f\n", aluno->nome, &aluno->genero, &aluno->nota);
}


char GetGeneroAluno(tAluno *aluno)
{
    return aluno->genero;
}


float GetNotaAluno(tAluno *aluno)
{
    return aluno->nota;
}