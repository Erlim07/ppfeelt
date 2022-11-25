/**
* Arquivo: maxHappyPrime.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:24/11/2022
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool ePrimo(int i);
int somaQuadrada(int a);
bool ehFeliz(int a);


int main(void){
    int num;
    printf("Forneca um numero: ");
    scanf("%d", &num);
    int escolhido = 0;
    for(int i =7; i<= num; i++){
        if(ePrimo(i) && ehFeliz(i)){
            escolhido = i;
        }
    }
    if(escolhido == 0){
        printf("Sem resposta\n");
    }else{
        printf("%d\n", escolhido);
    }

    return 1;
}



bool ePrimo(int i){
    for(int j = 2; j< i/2; j++){
        if(i%j == 0){
            return false;
        }
    }
    return true;

}

int somaQuadrada(int a){
    int b = a;
    int og = 0;
    while(b>=1){
        b = b/10;
        og = og + 1;
    }
    int soma = 0;

    for(int i = 1; i<=og; i++){
        int resto = a%10;
        soma = soma + pow(resto, 2);
        a = a/10;
    }

    return soma;
}

bool ehFeliz(int a){
    int tristes[] = {4, 16, 37, 58, 89, 145, 42, 20};
    
    while(a != 1){
        a =  somaQuadrada(a);
        for(int i = 0; i<8; i++){
            if(a == tristes[i]){
                return false;
            }
        }
    }
    return true;

}