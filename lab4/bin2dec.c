/**
* Arquivo: bin2dec.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:09/12/2022
*/

#include <stdio.h>
#define n 65
void getstr(char * str, int nchar);
int lenstr(char* palavra);


int main(void){
    char bin[n];
    int tamanho;
    printf("Numero binário: ");
    getstr(bin, n);
    tamanho = lenstr(bin);
    long long unsigned int numero = 0;
    for(int i = 0; i < tamanho; i++){
        numero = numero + ((bin[tamanho - 1 - i]-'0')*(long long unsigned int) 1<<i);
    }

    printf("%llu\n", numero);




}

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

int lenstr(char* palavra){
    long long int l = 0;
    while(palavra[l]) l++;
    return l;
}