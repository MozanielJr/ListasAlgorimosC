/*
Escreva um programa que leia o nome do funcionário, o sexo (F ou M), o número de
matrícula do funcionário, o número de horas trabalhadas, o valor que recebe por hora    
e calcule o salário desse funcionário. A seguir, mostre todos os dados na tela, os dados
de entrada e os dados de saída.
*/

#include<stdio.h>

int main(){

char nome[15], sexo;
int matricula;
float horasTrabalhadas, valorHora, salario;

printf("Vamos fechar a folhar de pagamento! \n");

printf("Digite o nome do funcionario:");
scanf("%s",&nome);

fflush(stdin);
printf("Digite o sexo F ou M:");
scanf("%c",&sexo);

printf("Digite a Matricula do funcionario:");
scanf("%d",&matricula);

printf("Quantas horas %s trabalhou?:", nome);
scanf("%f", &horasTrabalhadas);

printf("Qual o valor da hora de %s?:", nome);
scanf("%f", &valorHora);

salario = horasTrabalhadas*valorHora;

printf("%s, funcionario(a) do sexo %c, matricula %d, trabalhou %0.2f a %0.2f, e ira receber %0.2f", nome, sexo, matricula, horasTrabalhadas, valorHora, salario);



}