/**
* Arquivo: dist.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:24/11/2022
*/
#include <stdio.h>
#include <math.h>

int main(void){
    double xA, yA, xB, yB;
    printf("Forneça coordenadas de dois pontos:");
    scanf("%lf %lf", &xA, &yA);

    scanf("%lf %lf", &xB, &yB);

    double res;
    res = sqrt(pow(xA-xB, 2)+pow(yA-yB, 2));

    printf("%g\n", res);


    return 0;
}
