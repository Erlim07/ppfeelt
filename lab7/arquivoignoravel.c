/**
* Arquivo: txtFibonacci.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:14/01/2023
*/


#include <stdio.h>
#include <stdlib.h>
typedef
    long long int
llint;

void fibonacci(llint * resultados, int a);


int main(void){
    int num;
    FILE * arq;

    arq = fopen("fibonacci.txt", "w");
    if(arq == NULL){
        printf("Fudeu!");
        return 1;
    }

    printf("Quer quantos numeros chefe: ");
    scanf("%d%*c", &num);
    llint resultados[num];

    int i;
    for(i = 0; i < num; i++){
        fibonacci(resultados, i);
        printf("%d\n", resultados[i]);
        fprintf(arq, "%d\n", resultados[i]);
    }
    printf("%d\n", resultados[i]);

    fclose(arq);
    return 0;
}

void fibonacci(llint * resultados, int a){
    if(a==0){
        resultados[a]== 0;
    }
    else if(a==1){
        resultados[a]== 1;
    }
    else{
        resultados[a] = resultados[a-1]+ resultados[a-2];
    }
}