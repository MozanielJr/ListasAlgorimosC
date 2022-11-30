/*
Construa um algoritmo que leia um número inteiro de horas e mostre ao usuário o
correspondente em minutos e segundos destas horas.
*/

#include <stdio.h>

int main(){

int horas, minutos, segundos;


printf("Ola! Digite a numero de horas que deseja saber os minutos e segundos: \n");
scanf("%d", &horas);

minutos = horas*60;
segundos = minutos*60;

printf("%d horas, correspondem a %d minutos que correspondem a %d segundos. \n", horas, minutos, segundos);



}

