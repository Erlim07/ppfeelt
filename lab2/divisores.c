/**
* Arquivo: dist.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:24/11/2022
*/

#include <stdio.h>
int main(void){
    int i;
    scanf("%d", &i);

    for(int j= 1; j<=i; j++){
        if(i%j == 0){
            printf("%d ", j);
        }
    }
    printf("\n");





    return 1;

}