/*
Faça um algoritmo que leia um numero inteiro, dois números reais (um float e um
double), um caracter (uma única letra), uma string (conjunto de caracteres) e um
booleano. Na sequência, imprima todos com a formatação abaixo.
Numero inteiro: “valor”
Numeros reais:
“valor”
“valor”
Letra: “valor”
String: “valor”
Logico: “valor”
*/

#include<stdio.h>

int main(){

int numeroInteiro, sentenca;
float numeroFloat;
double numeroDouble;
char caracter, conjuntoCaracter[30];

printf("Digite um numero inteiro: ");
scanf("%d", &numeroInteiro);

printf("Digite um numero float: ");
scanf("%f", &numeroFloat);

printf("Digite um numero Double: ");
scanf("%lf", &numeroDouble);

fflush(stdin);
printf("Digite apenas um caracter: ");
scanf("%c",&caracter);

fflush(stdin);
printf("Digite um conjunto de caracters: ");
scanf("%s", &conjuntoCaracter);

printf("Digite 0 ou 1, sendo 0 para falso e 1 para verdadeiro:");
scanf("%d", &sentenca);

printf("Numero Inteiro: %d \n", numeroInteiro);
printf("Numero Reais:\n %f \n %lf \n", numeroFloat, numeroDouble);
printf("Letra:  %c \n", caracter);
printf("String:  %s \n", conjuntoCaracter);
if (sentenca == 0){
printf("Logico: Falso \n");
}
else{
printf("Logico: Verdadeiro \n");
}





}