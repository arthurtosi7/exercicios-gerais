#include "pessoa.h"
#include <stdio.h>

tPessoa CriaPessoa()
{
    tPessoa pessoa;
    pessoa.mae = NULL;
    pessoa.pai = NULL;
    pessoa.nome[0] = '\0';
    return pessoa;
}

void LePessoa(tPessoa *pessoa)
{
    *pessoa = CriaPessoa();

    scanf ("%*[^a-zA-Z]");
    scanf ("%[^\n]", pessoa->nome);
}

int VerificaSeTemPaisPessoa(tPessoa *pessoa)
{
    if (pessoa->mae != NULL || pessoa->pai != NULL)
        return 1;
    return 0;
}

void ImprimeNome (tPessoa *pessoa)
{
    printf ("%s\n", pessoa->nome);
}

void ImprimePessoa(tPessoa *pessoa)
{
    printf ("NOME COMPLETO: ");
    ImprimeNome (pessoa);
    printf ("PAI: ");
    if (pessoa->pai != NULL)
        ImprimeNome (pessoa->pai);
    else printf ("NAO INFORMADO\n");
    
    printf ("MAE: ");
    if (pessoa->mae != NULL)
        ImprimeNome (pessoa->mae);
    else printf ("NAO INFORMADO\n");

    printf ("\n");
}

void AssociaFamiliasGruposPessoas(tPessoa *pessoas)
{
    tPessoa *ptr;
    int quant, mae, pai, filho;
    scanf ("%d", &quant);
    for (int i = 0; i < quant; i++)
    {
        scanf ("%*[^a-zA-Z]");
        scanf ("mae: %d, pai: %d, filho: %d", &mae, &pai, &filho);
        ptr = &pessoas[filho];
        if (mae != -1)
            ptr->mae = &pessoas[mae];
        if (pai != -1)
            ptr->pai = &pessoas[pai];
    }
    
}