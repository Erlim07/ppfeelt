/**
* Arquivo: reverteString.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:08/12/2022
*/

#include <stdio.h>
#define n 1024
void getstr(char* str, int num);
int lenstr(char* palavra);
void to_upper(char* palavra);


int main(void){
    char palavra[n];
    int tamanho;

    //pega a string
    getstr(palavra, n);
    //acha o tamanho da palavra
    tamanho = lenstr(palavra);

    to_upper(palavra);

    char palavra2[tamanho];
    for(int i = 0; i < tamanho; i ++){
        palavra2[i] = palavra[tamanho-i-1];
    }
    palavra[tamanho-1] = 0;
    printf("%s\n", palavra2);

    return 1;
}

//captura strings
void getstr(char * str, int nchar) {
    char c;  int i;
    for(i = 0; i < nchar; i++) {
        c = getchar();
        if(c != '\n') {
            str[i] = c;
        } else {
            str[i] = '\0';
            break;
        }
    }
    if(i == nchar) {
        str[nchar-1] = '\0';
        // limpar buffer teclado
        while ((c = getchar()) != '\n' && c != EOF);
    } 
}
//acha len de strings
int lenstr(char* palavra){
    long long int l = 0;
    while(palavra[l]) l++;
    return l;
}

//deixa maiúscula
void to_upper(char* palavra){
    int i = 0;
    while(palavra[i]){
        if(palavra[i]<='z' && palavra[i] >='a'){
            palavra[i] -=  (' ');
        }
        i++;
    }

}