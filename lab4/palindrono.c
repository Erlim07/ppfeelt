/**
* Arquivo: palindrono.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:09/12/2022
*/

#include <stdio.h>
void pega_str(char* str, int num);
#define n 1024
char* to_lower(char* palavra);
int lenstr(char* palavra);
int lenstr_ol(char* palavra);
void limpa_str(char * str, int tamanho_ef, int tamanho_t, char * str_nova);



int main(void){
    char palin[n];
    printf("Escreva o palindromo: ");
    //captura a string
    pega_str(palin, n);
    //passa pra minúsculas
    to_lower(palin);
    // tamanho da string
    int tamanho = lenstr(palin);
    //tamanho da string sem sinais(',' entre outros)
    int tamanho_ef = lenstr_ol(palin);////////*********
    //retorna a sring sem sinais
    char palin_limpo[n];
    limpa_str(palin, tamanho_ef, tamanho, palin_limpo);

    int sim = 1;
    for(int i =0; i< tamanho_ef/2; i++){
        if(!(palin_limpo[i] == palin_limpo[tamanho_ef-1-i])){
            sim = 0;
        }
    }
    printf("Palindromo: ");
    if(sim){
        printf("Verdadeiro\n");
    }else{
        printf("Falso\n");
    }
    

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

int lenstr(char* palavra){
    long long int l = 0;
    while(palavra[l]) l++;
    return l;
}

int lenstr_ol(char* palavra){
    long long int l = 0;
    int i = 0;
    while(palavra[i]){
        if(palavra[i]>='a' && palavra[i]<='z'){
            l++;
        }
        i++;
    } 
    return l;
}

void limpa_str(char * str, int tamanho_ef, int tamanho_t, char * str_nova){
    int j = 0;
    int i = 0;
    while(str[i]){
        if(str[i]>='a' && str[i]<='z'){
            str_nova[j] = str[i];
            j++;
        }
        i++;
    }
    str_nova[tamanho_ef] = 0;
}