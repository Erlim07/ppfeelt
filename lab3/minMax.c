/**
* Arquivo: minMax.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:01/12/2022
*/

#include <stdio.h>

int main(void){
    int N;
    printf("Quantidade:");
    scanf("%d", &N);
    int a[N];
    for(int i=0; i < N; i++) {
        printf("Número %d: ", i+1);
        scanf("%d", a+i);
    }

    int maior = 0;
    int menor = a[0];
    for(int i=0; i < N; i++) {
        if(a[i]>maior){
            maior = a[i]; 
        }
        if(a[i]<menor){
            menor = a[i];
        }
    }
    //printa com sinais
    for(int i=0; i < N; i++) {
        printf("%d", a[i]);
        if(a[i] == maior){
            printf(">");
        }
        if(a[i] == menor){
            printf("<");
        }
        printf(" ");
    }


    return 1;
}