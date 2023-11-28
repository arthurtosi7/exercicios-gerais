#include "aluno.h"
#include "relatorio.h"
#include <stdio.h>

void ImprimeRelatorio(Vector *alunos)
{
    int numAlunos = VectorSize(alunos);
    int soma = 0, cont_masc = 0, cont_femin = 0, aprovados = 0;
    for (int i = 0; i < numAlunos; i++)
    {
        tAluno* aluno = VectorGet(alunos, i);
        printf ("%c\n", GetGeneroAluno(aluno));
        float nota_aluno = GetNotaAluno(aluno);

        if (nota_aluno >= 6)
            aprovados++;

        soma += nota_aluno;

        if (GetGeneroAluno(aluno) == 'M')
            cont_masc++;
        else if (GetGeneroAluno(aluno) == 'F')
            cont_femin++;
        
    }
    float media = (float)soma/numAlunos;

    printf ("Media das notas: %.2f\n", media);
    printf ("Porcentagem de alunos aprovados: %.2f%%\n", (float)aprovados/numAlunos * 100);
    printf ("Porcentagem de cada genero:\n");
    printf ("Masculino: %.2f%%\n", (float)cont_masc/numAlunos * 100);
    printf ("Feminino: %.2f%%\n", (float)cont_femin/numAlunos * 100);
    printf ("Outro: %.2f%%\n", ((float)numAlunos - cont_femin - cont_masc)/numAlunos * 100);
}