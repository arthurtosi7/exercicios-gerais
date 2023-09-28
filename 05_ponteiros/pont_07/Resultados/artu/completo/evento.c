#include "evento.h"
#include <stdio.h>

void cadastrarEvento(Evento* eventos, int* numEventos)
{
    if (*numEventos == MAX_EVENTOS){
        printf ("Limite de eventos atingido!\n");
        return;
    }
    scanf ("%*[^a-zA-Z]");
    scanf("%[^\n]", eventos[*numEventos].nome);
    scanf ("%d %d %d", &eventos[*numEventos].dia, &(eventos[*numEventos].mes), &(eventos[*numEventos].ano));
    (*numEventos)++;
    printf("Evento cadastrado com sucesso!\n");
}

void exibirEventos(Evento* eventos, int* numEventos)
{
    if (!(*numEventos))
    {
        printf ("Nenhum evento cadastrado.\n");
        return;
    }
    printf ("Eventos cadastrados:\n");
    for (int i = 0; i < *numEventos; i++)
    {
        printf ("%d - %s - %d/%d/%d\n", i, eventos[i].nome, eventos[i].dia, eventos[i].mes, eventos[i].ano);
    }
}

void trocarDataEvento(Evento* eventos, int* numEventos)
{
    int troca;
    scanf ("%d", &troca);
    if (troca > numEventos)
    {
        printf ("Indice invalido!\n");
    }
    scanf ("%d %d %d", &eventos[troca].dia, &eventos[troca].mes, &eventos[troca].ano);
}

void trocarIndicesEventos(Evento* eventos, int* indiceA, int* indiceB, int* numEventos)
{
    if (*indiceA <= *numEventos && *indiceB <= *numEventos)
    {
        Evento temp = eventos[*indiceA];
        eventos[*indiceA] = eventos[*indiceB];
        eventos[*indiceB] = temp;
    }
    else
        printf ("Indices invalidos!\n");
}