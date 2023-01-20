/**
* Arquivo: txtFibonacci.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:14/01/2023
*/


#include <stdio.h>
#include <stdlib.h>
typedef
    long long unsigned int
llint;

void fibonacci(llint * resultados, int a);


int main(void){
    int num;
    FILE * arq;
    llint * resultados;
    arq = fopen("fibonacci.txt", "w");
    if(arq == NULL){
        printf("Fudeu!");
        return 1;
    }
    
    printf("Quer quantos numeros chefe: ");
    scanf("%d%*c", &num);
    resultados = (llint *) malloc(num * sizeof(llint));

    int i;
    for(i = 0; i < num; i++){
        fibonacci(resultados, i);
        fprintf(arq, "%llu\n", resultados[i]);
    }
    printf("%llu\n", resultados[i-1]);

    free(resultados);
    fclose(arq);
    return 0;
}

void fibonacci(llint * resultados, int a){
    if(a==0){
        resultados[a]=(llint) 0;
    }
    else if(a==1){
        resultados[a]= (llint) 1;
    }
    else{
        resultados[a] = resultados[a-1]+ resultados[a-2];
    }
}