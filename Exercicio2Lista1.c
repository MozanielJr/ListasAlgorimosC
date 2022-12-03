/*
Construa um algoritmo que calcule a área de um círculo cujo raio é fornecido pelo
usuário (use área= 3.14 x raio2)
*/

#include<stdio.h>
#include<math.h>

int main(){

float area, raio;
float pi;

pi = 3.14;

printf("Vamos calcular a area do circulo! Digite o raio:");
scanf("%f", &raio);

area = pi*pow(raio,2);

printf("A area calculada eh %0.3f \n", area);


}