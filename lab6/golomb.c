/**
* Arquivo: golomb.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:14/01/2023
*/

#include <stdio.h>
#include <stdlib.h>

void seq(int * vetor, int n);


int main(void){

    int b,a, aux;
    printf("Forneca o inicio: ");
    scanf("%d", &a);
    printf("Forneca o final: ");
    scanf("%d", &b);
    if(b < a) { aux = a; a = b; b = a; }

    int * vec = (int *) malloc((b+1)*sizeof(int));

    seq(vec, b+1);//b+1 pq são 11 termos
    int soma = 0; double media;
    for( int i = a; i<=b; i++){    
        soma += vec[i];
        //printf("%d ", soma);

    }
    media = (double) soma / (b-a+1);

    printf("%d %d %lg\n",vec[a], vec[b], media);

    free(vec);
    return 1;
}


void seq(int * vetor, int n){
    for(int i = 0; i<n; i++){    
        if(i == 0){
            vetor[i] = 1;
        }else{
            vetor[i] = 1 + vetor[i-vetor[vetor[i-1]-1]];
        }
    }
}