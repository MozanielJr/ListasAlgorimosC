/*
Construa um algoritmo que calcule a média aritmética de 3 números quaisquer
fornecidos pelo usuário.
*/

#include<stdio.h>

int main(){

float n1, n2, n3, media;


printf("Vamos calcular a media! Digite o primeiro numero:");
scanf("%f", &n1);

printf("Digite o segundo numero:");
scanf("%f", &n2);

printf("Digite o terceiro numero:");
scanf("%f", &n3);

media = (n1 + n2 + n3)/3;

printf("Show de bola! A media eh %0.2f \n", media);


}