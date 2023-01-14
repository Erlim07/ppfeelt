/**
* Arquivo: raizes2grau.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:14/01/2023
*/


#include <stdio.h>
#include <math.h>

int raizes(float * a, float * b, float * c, float * x1, float * x2);


int main(void){
    float a, b, c, x1, x2; 
    printf("Digite os coeficientes da equacao(a b c):");
    scanf("%f %f %f%*c", &a, &b, &c);
    int n = raizes(&a,&b,&c,&x1, &x2);
    if(n == 2){
        printf("%d %g %g\n", n, x1, x2);
    }else if(n == 1){
        printf("%d %g\n", n, x1);
    }else{
        printf("%d\n", n);
    }

    return 0;
}


int raizes(float * a, float * b, float * c, float * x1, float * x2){
    float delta = (*b)*(*b)-4*(*a)*(*c);
    if(delta >0.0){
        *x2 = (-(*b)+sqrt(delta))/(2*(*a));
        *x1 = (-(*b)-sqrt(delta))/(2*(*a));
        if(*x1>*x2){
            float aux = *x1;
            *x1 = *x2;
            *x2 = aux;
        }
        return 2;
    }else if(delta<0.0){
        return 0;
    }else{
        *x1 = -(*b)/(2*(*a));
        return 1;
    }
}
