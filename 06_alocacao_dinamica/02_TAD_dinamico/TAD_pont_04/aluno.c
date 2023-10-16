#include <stdio.h>
#include "aluno.h"
#include <stdlib.h>


tAluno* CriaAluno()
{
    tAluno *p_aluno;
    p_aluno = (tAluno *) malloc(sizeof(tAluno));
    if (p_aluno == NULL){
        printf ("ERRO DE MEMORIA EM CRIA ALUNO\n");
        exit(0);
    }
    p_aluno->nome = NULL;
    p_aluno->matricula = -1;
    p_aluno->n1 = -1;
    p_aluno->n2 = -1;
    p_aluno->n3 = -1;

    return p_aluno;
}

void ApagaAluno(tAluno *aluno)
{
    free (aluno->nome);
    free (aluno);
}

void LeAluno(tAluno *aluno)
{
    int tamanho = 0;
    char caractere = 1;
    while (caractere != '\0')
    {
        scanf ("%c", &caractere);
        tamanho++;
        aluno->nome = realloc(aluno->nome, tamanho);
        aluno->nome[tamanho - 1] = caractere;
    }
}

int ComparaMatricula(tAluno* aluno1, tAluno* aluno2)
{
    if (aluno1->matricula > aluno2->matricula)
        return 1;
    else if (aluno2->matricula > aluno1->matricula)
        return -1;
    return 0;
}

int CalculaMediaAluno(tAluno* aluno)
{
    return (aluno->n1 + aluno->n2 + aluno->n3)/3;
}

int VerificaAprovacao(tAluno* aluno)
{
    if (CalculaMediaAluno(aluno) >= 7)
        return 1;
    return 0;
}

void ImprimeAluno(tAluno* aluno)
{

}