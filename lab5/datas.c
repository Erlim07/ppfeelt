/**
* Arquivo: datas.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:05/01/2023
*/

#include <stdio.h>
typedef
    struct datas
    {
        int dia, mes, ano;
    }
Datas;
const char strmes[13][4] = {
    "", "JAN", "FEV", "MAR", "ABR", "MAI", "JUN",
    "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"
};


int main(void){
    Datas tempo;
    printf("Insira uma data(dia/mes/ano): ");
    scanf("¨%d/%d/%d", &tempo.dia, &tempo.mes, &tempo.ano);

    printf("%02d.%02d.%04d", tempo.dia, tempo.mes, tempo.ano);
    printf("  %02d-%02d-%04d", tempo.dia, tempo.mes, tempo.ano);
    printf("  %02d/%02d/%04d", tempo.dia, tempo.mes, tempo.ano);
    printf("  %02d%s%04d", tempo.dia, strmes[tempo.mes], tempo.ano);


    return 1;
}