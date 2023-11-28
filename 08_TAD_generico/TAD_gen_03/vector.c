#include "vector.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Vector
{
    data_type* elem;
    int tamanhoElem;
    int numElem;
};

Vector *VectorConstruct()
{
    Vector* vet = (Vector*) malloc (sizeof(Vector));
    if (vet == NULL)
        exit(0);
    vet->elem = NULL;
    vet->tamanhoElem = sizeof(data_type);
    vet->numElem = 0;

    return vet;
}

void VectorPushBack(Vector *v, data_type val)
{
    v->elem = realloc(v->elem, (v->numElem + 1) * v->tamanhoElem);
    memcpy(v->elem + v->numElem * v->tamanhoElem, val, v->tamanhoElem);

    v->numElem++;
}

data_type VectorGet(Vector *v, int i)
{
    if (i > v->numElem-1 || i < 0)
        printf ("Índice inválido\n");
    return v->elem[i];
}

int VectorSize(Vector *v)
{
    return v->numElem;
}

void VectorDestroy(Vector *v, void (*destroy)(data_type))
{
    for (int i = 0; i < v->numElem; i++)
    {
        destroy (v->elem[i]);
    }
    free (v);    
}