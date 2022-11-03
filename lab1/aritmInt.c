/**
* Arquivo: aritmInt.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:03/11/2022
*/


#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {

    printf("Digite 2 numeros:\n");
    int num1; 
    int num2;
    scanf("%d",&num1);
    scanf("%d", &num2);
    printf("%d + %d = %d", num1, num2, num1+num2);
    printf("%d - %d = %d", num1, num2, num1-num2);
    printf("%d * %d = %d", num1, num2, num1*num2);
    printf("%d / %d = %d", num1, num2, num1/num2);
    printf("%d %% %d = %d", num1, num2, num1%num2);
    
    
    return EXIT_SUCCESS;
}
