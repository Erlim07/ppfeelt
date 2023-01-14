/**
* Arquivo: aleatorios.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:14/01/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;

    printf("Passa um numero:");
    scanf("%d%*c", &n);
    srand(n);
    int * vec = (int *) malloc(n*sizeof(int));

    for(int i = 0; i< n; i++) vec[i] = rand()%n;
    int max = 0; int min = n+1; int soma = 0; double media;

    for(int i = 0; i< n; i++){
        if(vec[i]>max)
            max = vec[i];
        if(vec[i]< min)
            min = vec[i];

        soma += vec[i];
    }
    media = (double) soma / n;

    
    printf("%d %d %lf\n", min, max, media);
    free(vec);
    return 1;
}