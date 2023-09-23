#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Carta.h"
void RetornaPosicao(Carta *carta){
    strcpy(carta->posicao[1],"para cima");
    strcpy(carta->posicao[2],"para baixo");
}
void AlteraPosicao(Carta *carta){
    char aux[15];
    strcpy(aux,carta->posicao[1]);
    strcpy(carta->posicao[1], carta->posicao[2]);
    strcpy(carta->posicao[2], aux);
    printf("%s\n",carta->posicao[1]);
    printf("%s",carta->posicao[2]);
}
void Exibir(Carta *carta){
    if(carta->posicao[1]=="para cima"){
        printf("%i,%s,%s",carta->valor,carta->naipe,carta->posicao[1]);
    }
    else if(carta->posicao[1]=="para baixo"){
        printf("%s",carta->posicao[1]);
    }
}
