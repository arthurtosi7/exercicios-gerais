#include "tadgen.h"
#include <stdio.h>
#include <stdlib.h>

struct generic
{
    Type type;
    void* elem;
    int numElem;
};


tGeneric* CriaGenerico(Type type, int numElem)
{
    tGeneric* gen = (tGeneric*) malloc (sizeof (tGeneric));

    int size_type;
    if (type == FLOAT)
        size_type = sizeof(float);
    else
        size_type = sizeof(int);

    gen->elem = (void*) malloc (numElem * size_type);
    gen->type = type;

    return gen;
}

void DestroiGenerico(tGeneric* gen)
{
    free (gen->elem);
    free (gen);
}


void LeGenerico(tGeneric* gen);


void ImprimeGenerico(tGeneric* gen);