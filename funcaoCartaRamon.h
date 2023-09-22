#ifndef CARTA_H
#define CARTA_H
#include "Mesa.h"
typedef struct 
{
    Baralho* baralho;
    char naipe[3], posicao[2][15];
    int valor;
}Carta;

void RetornaPosicao(Carta *carta);
void AlteraPosicao(Carta *carta);
void Exibir(Carta *carta);
#endif
