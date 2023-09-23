#include "Carta.h"
//TAD para a criação das listas de cartas
typedef struct celula{
    Carta carta;
    struct celula *pProx;
}TCelula;
typedef struct celula *Apontador;//Criado para facilitar o typecast na função FListaVazia;
typedef struct{
//Ponteiros auxiliares para facilitar as ações feitas na lista:
    struct celula *pPrimeiro, *pUltimo;
}TLista;
