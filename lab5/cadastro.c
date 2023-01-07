/**
* Arquivo: cadastro.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:05/01/2023
*/
#define n 1024
#include <stdio.h>
const char strmes[13][4] = {
    "", "JAN", "FEV", "MAR", "ABR", "MAI", "JUN",
    "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"
};
void pega_str(char* str, int num);
void pega_niver(char* str, int num);


typedef
    struct datas
    {
        int dia, mes, ano;
    }
Datas;
typedef 
    struct comprimento
    {
        int metros, centimetros;
    }
comprimento;
typedef
    struct pessoa
    {
        char nome1[n];
        char nome2[n];
        Datas aniversario;
        float peso;
        comprimento altura;

    }
pessoa;


int main(void){
    int num;
    char clear[2];
    printf("Quantas pessoas: ");
    scanf("%d", &num);
    pessoa lista[num];
    pega_str(clear, 2);
    for(int i = 0; i<num; i++){
        for(int j = 0; j < n; j++){
            lista[i].nome1[j] = 0; 
            lista[i].nome2[j] = 0;
        }
        scanf("%s %s %d/%d/%d %d.%d %f", &lista[i].nome1, &lista[i].nome2, &lista[i].aniversario.dia,&lista[i].aniversario.mes, &lista[i].aniversario.ano, &lista[i].altura.metros, &lista[i].altura.centimetros, &lista[i].peso);
        while (lista[i].altura.centimetros<10 || lista[i].altura.centimetros>99)
        {
            if(lista[i].altura.centimetros<10){
                lista[i].altura.centimetros = lista[i].altura.centimetros*10;
            }
            if(lista[i].altura.centimetros>99){
                lista[i].altura.centimetros = lista[i].altura.centimetros/10;
            }
        }
        


        /**pega_str(lista[i].nome, n);
        printf("%s ", lista[i].nome);
        //baguncinha pra pegar o aniversário
        char c = 0;
        char datas[12];
        datas[11] = 0;
        int j = 0;
        c = getchar();
        while(c!=' '){
            datas[j] = c;
            c = getchar();
            j++;
        }datas[j] = 0;
        //transformando a data na struct
        j = 0;
        int barras = 0;
        while (datas[j])
        {
            if(datas[j]=="/"){
                barras++;
            }




            j++;
        }
        
        //datas salvas em str, dedicar a elas depois
        
        //baguncinha pra altura
        char alturam[5];
        alturam[4] = 0;
        j = 0;
        c= getchar();
        while(c!=' '){
            if(j<4){
                alturam[j] = c;
            }
            c = getchar();
            j++;
        }
        

        //baguncinha pra peso
        char pesom[5];
        pesom[4] = 0;
        j = 0;
        c= getchar();
        while(c!='\n'){
            if(j<4){
                pesom[j] = c;
            }
            c = getchar();
            j++;
        }
        printf("%s", pesom);**/
    }
    
    for(int i = 0; i<num; i++){
        printf("%s %s; ", lista[i].nome1, lista[i].nome2);
        printf("%02d%s%04d; ", lista[i].aniversario.dia, strmes[lista[i].aniversario.mes], lista[i].aniversario.ano);
        printf("%dm%02d; ", lista[i].altura.metros, lista[i].altura.centimetros);
        printf("%.1fkg\n", lista[i].peso);
    }
    return 1;
}


void pega_str(char* str, int num){
    char c;
    int i;
    int space = 0;
    for(i = 0; i < num; i++){
        c = getchar();

        if(c!='\n'){
            if(c==' '){
                space++;
            }
            if(space == 2){
                str[i] = '\0';
                break;
            }
            str[i] =c; 
        }else{
            str[i] = '\0';
            break;
        }
    }

}

void pega_niver(char* str, int num){
    char c;
    int i;
    int space = 0;
    for(i = 0; i < 9; i++){
        c = getchar();

        if(c!='\n'){
            if(c==' '){
                space++;
            }
            if(space == 1){
                str[i] = '\0';
                break;
            }
            str[i] =c;
        }else{
            str[i] = '\0';
            break;
        }
    }
}
