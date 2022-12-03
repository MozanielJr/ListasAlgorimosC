
/* 5. Fazer um algoritmo para auxiliar um construtor a descobrir a quantidade de rolos e a
quantidade de metros avulsos de fios que ele precisa adquirir. Sabe-se que o
construtor tem a quantidade total de fios em metros a serem utilizados na instalaÃ§Ã£o
elÃ©trica da obra e que cada rolo de fio tem 50 metros.
*/

#include <stdio.h>

main(){

int quantidadeRolo, quantidadeFio, quantidadeTotal;

    printf("Construtor, digite a quantidade total de fios: ");
        scanf("%d", &quantidadeTotal);

quantidadeRolo = quantidadeTotal / 50;
quantidadeFio = quantidadeTotal % 50;
    printf("serao utilizados %d rolos e %d fios avulsos", quantidadeRolo, quantidadeFio );


}