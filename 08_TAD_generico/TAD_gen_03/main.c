#include <stdio.h>
#include "relatorio.h"
#include "aluno.h"

int main ()
{
    Vector* vector = VectorConstruct();
    int qtd_aluno;
    scanf ("%d\n", &qtd_aluno);
    for (int i = 0; i < qtd_aluno; i++)
    {
        tAluno* aluno = CriaAluno();
        LeAluno(aluno);
        VectorPushBack (vector, aluno);
    }
    ImprimeRelatorio (vector);
    VectorDestroy (vector, DestroiAluno);
}