/*
 Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer
no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas
decimais após a vírgula, segundo a fórmula:
*/

#include<stdio.h>
#include<math.h>

int main(){

int pontoX1, pontoX2, pontoY1, pontoY2;
float distancia;

printf("Digite as coordenadas do primeiro ponto, (x,y):");
scanf("%d%d", &pontoX1, &pontoY1);

printf("Digite as coordenadas do segundo ponto, (x,y):");
scanf("%d%d", &pontoX2, &pontoY2);

distancia = sqrt(pow((pontoX2-pontoX1),2)+pow((pontoY2-pontoY1),2));

printf("A distancia entre os pontos colocados eh de %0.4f. \n", distancia);







}