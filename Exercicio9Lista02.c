/*
Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de
vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha
15% de comissão sobre suas vendas efetuadas, informar o total a receber no final
do mês, com duas casas decimais.
*/

#include<stdio.h>

int main(){

char nomeVendedor[30];
float salario, vendas, comissao;


printf("Por favor, digite o nome do vendedor: ");
scanf("%s", &nomeVendedor);

printf("Qual o salario fixo do vendedor?:");
scanf("%f", &salario);

printf("Qual o total de vendas realizada pelo vendedor?:");
scanf("%f", &vendas);

comissao = vendas * 0.15;

printf("%s ira receber %0.2f neste mes. \n", nomeVendedor, salario+comissao);




}