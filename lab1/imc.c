/**
* Arquivo: aritmInt.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:03/11/2022
*/

#include <stdio.h>
int main(void){
    int peso;
    float altura;

    scanf("%d", &peso);
    scanf("%f", &altura);

    float imc = peso/(altura*altura);

    if(imc<16){
        printf("%.2f (Perigo de vida\n)", imc);
    }
    else if(imc>=16 && imc < 17){
        printf("%.2f (Muito abaixo do peso\n)", imc);
    }
    else if(imc>=17 && imc< 18.5){
        printf("%.2f (Abaixo do peso\n)", imc);
    }
    else if(imc>=18.5 && imc< 25){
        printf("%.2f (Peso normal)\n", imc);
    }
    else if(imc>=25 && imc< 30){
        printf("%.2f (Acima do peso\n)", imc);
    }
    else if(imc>=30 && imc< 35){
        printf("%.2f (Obesidade Grau I)\n", imc);
    }
    else if(imc>=35 && imc< 40){
        printf("%.2f (Obesidade Grau II)\n", imc);
    }
        else if(imc>=30 && imc< 35){
        printf("%.2f (Obesidade Grau III)\n", imc);
    }   
    
}
