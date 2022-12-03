/*
Construa um algoritmo que a partir da leitura de dois números forneça o resto e o
quociente da divisão do primeiro pelo segundo número.
*/

#include<stdio.h>

int main(){

int n1, n2;
float resto, quociente;


printf("Vamos la! Digite o primeiro numero:");
scanf("%d",&n1);

printf("Agora digite o segundo numero:");
scanf("%d",&n2);

resto = n1%n2;

quociente = n1/n2;

printf("O resto da divisao de %d por %d eh %0.2f \n", n1,n2,resto);
printf("O quociente da divisao de %d por %d eh %0.2f \n", n1,n2,quociente);






}