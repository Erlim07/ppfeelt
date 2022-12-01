/**
* Arquivo: quaisDiv.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:01/12/2022
*/

#include <stdio.h>

int main(void){
    int N;
    //pegando N
    printf("Quantos elementos? ");
    scanf("%d", &N);
    int vetor[N];
    for(int i = 0; i < N; i++){
        printf("Numero %d: ", i+1);
        scanf("%d", vetor+i);
    }
    //referencia
    int referencia;
    printf("Referência: ");
    scanf("%d", &referencia);

    for(int i = 0; i < N; i++){
        printf("%d", vetor[i]);
        if((referencia%vetor[i])==0){
            printf("#");
        }
        printf(" ");
    }


    return 1;
}

