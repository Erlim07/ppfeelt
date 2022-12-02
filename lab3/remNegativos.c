/**
* Arquivo: remNegativos.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:01/12/2022
*/

#include <stdio.h>

int contaPositivos(int vetor[], int N);
void segregadora(int lista[], int N, int listaPosi[]);


int main(void){

    int N;
    printf("Quantidade: ");
    scanf("%d", &N);

    int lista[N];

    for(int i = 0; i<N; i++){
        printf("Numero %d: ", i+1);
        scanf("%d", lista+i);        
    }

    int positivos = contaPositivos(lista, N);
    if(positivos == 0){
        printf("vazio\n");
        return 1;
    }
    int listaPosi[positivos];
    segregadora(lista, N, listaPosi);

    printf("%d", listaPosi[0]);
    for(int i = 1; i<positivos; i++){
        printf(", %d", listaPosi[i]);
    }
    printf("\n");


    return 1;
}



int contaPositivos(int vetor[], int N){
    int num = 0;
    for(int i = 0; i<N; i++){
        if(vetor[i]>0){
            num++;
        }
    }
    return num;
}

void segregadora(int lista[], int N, int listaPosi[]){
    int j = 0;
    for(int i = 0; i<N; i++){
        if(lista[i]>0){
            listaPosi[j] = lista[i];
            j++;
        }
    }
}