/**
* Arquivo: contaPalavras.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:09/12/2022
*/

#include <stdio.h>
#define n 1024
void pega_str(char* str, int num);
char* to_lower(char* palavra);



int main(void){
    char string[n];
    printf("Frase: ");
    pega_str(string, n);
    to_lower(string);
    int i = 0;
    int palavras = 0;
    int estado = 0;
    while (string[i])
    {
        if(string[i]<='9' && string[i]>='0' || string[i]<='z' &&string[i] >='a'){
            estado = 1;
        }
        if(string[i] == ' ' && estado == 1){
            estado = 0;
            palavras++;
        }
        i++;
    }
    palavras++;
    printf("%d\n", palavras);


    return 1;
}

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

char* to_lower(char* palavra){
    int i = 0;
    while(palavra[i]){
        if(palavra[i]<='Z' && palavra[i] >='A'){
            palavra[i] -=  ('A'-'a');
        }
        i++;
    }

}