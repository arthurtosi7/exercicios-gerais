#include <stdio.h>
#include "aluno.h"

int main ()
{
    int n;
    scanf ("%d", &n);
    tAluno aluno[n];

    for (int i = 0; i < n; i++)
    {
        aluno[i] = LeAluno();
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            tAluno aux;
            if (ComparaMatricula(aluno[i], aluno[j]) == 1)
            {
                aux = aluno[i];
                aluno[i] = aluno[j];
                aluno[j] = aux;
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if (VerificaAprovacao (aluno[i]))
            ImprimeAluno (aluno[i]);
    }
}