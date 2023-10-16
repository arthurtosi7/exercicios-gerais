#include <stdio.h>
#include "aluno.h"
#include <stdlib.h>

int main ()
{
    int n;
    scanf ("%d", &n);
    tAluno *p_aluno[n];
    printf ("AAA\n");

    for (int i = 0; i < n; i++)
    {
        p_aluno[i] = CriaAluno();
        LeAluno (p_aluno[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            tAluno *aux;
            if (ComparaMatricula(p_aluno[i], p_aluno[j]) == 1)
            {
                aux = p_aluno[i];
                p_aluno[i] = p_aluno[j];
                p_aluno[j] = aux;
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if (VerificaAprovacao (p_aluno[i]))
            ImprimeAluno (p_aluno[i]);
    }
}