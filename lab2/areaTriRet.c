/**
* Arquivo: areaTriRet.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:24/11/2022
*/
#include <stdio.h>

int main(void){

    float xa, xb, ya, yb;
    printf("Forneça dois pontos: ");
    scanf("%f %f", &xa, &ya);
    scanf("%f %f", &xb, &yb);

    float b = xa-xb;
    float a = ya-yb;

    float area = b*a/2;
    if(area<0){
        area = -area;
    }

    printf("%g\n", area);


    return 1;

}