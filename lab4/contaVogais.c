/**
* Arquivo: contaVogais.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:08/12/2022
*/

#include <stdio.h>
#define n 1024
char* to_lower(char* palavra);
void pega_str(char* str, int num);

int main(void){

    char palavra[n];

    printf("Passa uma palavra:");
    
    pega_str(palavra, n);

    to_lower(palavra);

    int i = 0, vogais = 0;
    while(palavra[i]){
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
            vogais++;
        }
        i++;
    }

    printf("%d\n", vogais);
    return 1;
}

//captura strings
void pega_str(char* str, int num){
    char c;
    int i;
    for(i = 0; i < num; i++){
        c = getchar();
        if(c!='\n'){
            str[i] =c; 
        }else{
            str[i] = '\0';
            break;
        }
    }
    if(i == num){ 
        str[num-1] = 0;
        while((c = getchar()) != '\n' && c !=EOF);
    }
}


//Coloca ea string em minúscula
char* to_lower(char* palavra){
    int i = 0;
    while(palavra[i]){
        if(palavra[i]<='Z' && palavra[i] >='A'){
            palavra[i] -=  ('A'-'a');
        }
        i++;
    }

}