/**
* Arquivo: racionais.c
* Autor: Euler Borges Ferreira Filho
* Matricula: 12121EEL001
* Criado em:05/01/2023
*/


#include <stdio.h>
int mdc(int a, int b);
typedef
    struct racionais
    {
        int num, den;
    }
racionais;

racionais soma(racionais prim, racionais sec);
racionais subtracao(racionais prim, racionais sec);
racionais multiplicacao(racionais prim, racionais sec);
racionais divisao(racionais prim, racionais sec);


int main(void){
    racionais primeiro;
    racionais segundo;
    printf("Prdeneiro numional(num num_i): ");
    scanf("%d %d", &primeiro.num, &primeiro.den);
    printf("Segundo numional(num num_i): ");
    scanf("%d %d", &segundo.num, &segundo.den);
    int mdc1 = mdc(primeiro.num, primeiro.den), mdc2 = mdc(segundo.num, segundo.den);
    if(mdc1==0) mdc1 = 1;
    if(mdc2==0) mdc2 = 1;
    primeiro.den = primeiro.den/mdc1; primeiro.num = primeiro.num/mdc1;
    segundo.den = segundo.den/mdc2; segundo.num = segundo.num/mdc2;
    racionais soma1 = soma(primeiro, segundo);
    racionais sub = subtracao(primeiro, segundo);
    racionais multi = multiplicacao(primeiro, segundo);
    racionais div = divisao(primeiro, segundo);


    
    printf("%d/%d ", primeiro.num, primeiro.den);
    printf("%d/%d ", segundo.num, segundo.den);
    printf("%d/%d ", soma1.num, soma1.den);
    printf("%d/%d ", sub.num, sub.den);
    printf("%d/%d ", multi.num, multi.den);
    printf("%d/%d\n", div.num, div.den);
    
    
    
    
    return 0;
}


int mdc(int a, int b){
    if(b==0) return a;
    mdc(b, a%b);
}


racionais soma(racionais prim, racionais sec){
    racionais resultado;
    resultado.den = prim.den *sec.den;
    resultado.num = prim.num*sec.den+sec.num*prim.den;
    int mdcRes = mdc(resultado.num, resultado.den);
    resultado.den = resultado.den/mdcRes; resultado.num = resultado.num/mdcRes;
    if(resultado.den <0){
        resultado.den = resultado.den*(-1); resultado.num = resultado.num*(-1);
    }
    return resultado;
}

racionais subtracao(racionais prim, racionais sec){
    racionais resultado;
    resultado.den = prim.den *sec.den;
    resultado.num = prim.num*sec.den-sec.num*prim.den;
    int mdcRes = mdc(resultado.num, resultado.den);
    resultado.den = resultado.den/mdcRes; resultado.num = resultado.num/mdcRes;
    if(resultado.den <0){
        resultado.den = resultado.den*(-1); resultado.num = resultado.num*(-1);
    }
    return resultado;
}

racionais multiplicacao(racionais prim, racionais sec){
    racionais resultado;
    resultado.den = prim.den *sec.den;
    resultado.num = prim.num *sec.num;
    int mdcRes = mdc(resultado.num, resultado.den);
    resultado.den = resultado.den/mdcRes; resultado.num = resultado.num/mdcRes;
    if(resultado.den <0){
        resultado.den = resultado.den*(-1); resultado.num = resultado.num*(-1);
    }
    return resultado;
}

racionais divisao(racionais prim, racionais sec){
    racionais resultado;
    resultado.den = prim.den *sec.num;
    resultado.num = prim.num *sec.den;
    int mdcRes = mdc(resultado.num, resultado.den);
    resultado.den = resultado.den/mdcRes; resultado.num = resultado.num/mdcRes;
    if(resultado.den <0){
        resultado.den = resultado.den*(-1); resultado.num = resultado.num*(-1);
    }
    return resultado;
}
