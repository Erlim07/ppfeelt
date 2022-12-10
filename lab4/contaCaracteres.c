/**
* Arquivo: contaCaracteres.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:09/12/2022
*/

#include <stdio.h>
void pega_str(char* str, int num);
#define n 1024


int main(void){
    char frase[n];
    pega_str(frase, n);
    int i =0;
    int letras = 0;
    int num = 0;
    int outros = 0;

    while(frase[i]){
        if((frase[i]<='z' && frase[i]>= 'a') || (frase[i]<='Z' && frase[i]>='A')){
            letras++;
        }else if(frase[i]<='9' && frase[i]>='0'){
            num++;
        }else{
            outros++;
        }
        i++;
    }
    printf("letras: %d  digitos: %d  outros: %d\n", letras, num, outros);

    return 0;
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