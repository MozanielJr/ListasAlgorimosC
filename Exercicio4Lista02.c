/*
Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma
de A e B atribuindo o seu resultado na variável X. Imprima o resultado da seguinte
forma “valor de A” + “valor de B” = “valor de X”.

*/

#include<stdio.h>

int main(){

int numeroA, numeroB, somaAB;


printf("Digite dois numeros inteiros: ");
scanf("%d%d", &numeroA, &numeroB);

somaAB = numeroA + numeroB;

printf("O Primeiro numero %d + o segundo numero %d = %d \n", numeroA, numeroB, somaAB);







}