/**
* Arquivo: aleatorios.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:14/01/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *arq_pont;
    char * palavra;
    arq_pont = fopen("arquivo.txt", "w");
    palavra = (char *) calloc(1025, sizeof(char));
    if(arq_pont == NULL){
        printf("Fudeu!");
        return 1;
    }

    printf("Escreva algo:");
    scanf("%s", palavra);
    palavra[1024] = 0;
    fprintf(arq_pont, "%s", palavra);
    free(palavra);
    fclose(arq_pont);
    return 0;
}