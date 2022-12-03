/*
Fazer um algoritmo para auxiliar um construtor a descobrir a quantidade de rolos e a
quantidade de metros avulsos de fios que ele precisa adquirir. Sabe-se que o
construtor tem a quantidade total de fios em metros a serem utilizados na instalação
elétrica da obra e que cada rolo de fio tem 50 metros.
*/

#include<stdio.h>

int main(){


int quantidadeTotal;

printf("Entao, Construtor, digite a quantidade total de fios que serao utilizados:");
scanf("%d",quantidadeTotal);

printf("Beleza, voce ira precisar de %d rolos e %d fios avulsos.", quantidadeTotal/50, quantidadeTotal%50);



}