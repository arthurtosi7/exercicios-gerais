#include "aluno.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
    tAluno* alunoo = (tAluno*)aluno;
    free(alunoo->nome);
    free(alunoo);
}


void LeAluno(tAluno *aluno)
{
    char nome[50];
    scanf ("%[^;]", nome);
    aluno->nome = (char*) malloc ((strlen(nome)+1) * sizeof (char));
    strcpy (aluno->nome, nome);
    scanf (";%c;%f", &aluno->genero, &aluno->nota);
    scanf ("%*c");
}


char GetGeneroAluno(tAluno *aluno)
{
    return aluno->genero;
}


float GetNotaAluno(tAluno *aluno)
{
    return aluno->nota;
}