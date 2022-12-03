/*
Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e
atribua esta operação à variável PROD. A seguir mostre a variável PROD com
mensagem: PROD = “valor de PROD
*/

#include<stdio.h>

int main(){

int numero1, numero2, prod;


printf("Digite um numero inteiro a ser multiplicado:");
scanf("%d",&numero1);

printf("Digite o segundo numero inteiro a ser multiplicado:");
scanf("%d",&numero2);

prod = numero1 * numero2;

printf("%d = Valor de Prod \n", prod);



}