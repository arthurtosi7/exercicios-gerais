#include <stdio.h>
#include "pessoa.h"

int main()
{
    int quant;
    scanf ("%d", &quant);
    tPessoa pessoas[quant];
    for (int i = 0; i < quant; i++)
    {
        LePessoa(&pessoas[i]);
    }
    AssociaFamiliasGruposPessoas (pessoas);
    for (int i = 0; i < quant; i++)
    {
        if (VerificaSeTemPaisPessoa (&pessoas[i]))
            ImprimePessoa (&pessoas[i]);
    }
}