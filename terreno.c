#include<stdio.h>

int main(){
float largura, comprimento, quadrado, areaTerreno, valorTerreno;

printf("Digite a largura do terreno : ");
scanf("%f", &largura);

printf("Digite o comprimento do terreno: ");
scanf("%f", &comprimento);

printf("Digite o valor do metro quadrado: ");
scanf("%f", &quadrado);

areaTerreno = largura*comprimento;
valorTerreno = quadrado * areaTerreno;

printf("Area total do terreno = %.2f\n ", areaTerreno);
printf("Valor total do terreno = %.2f\n", valorTerreno);

return 0;
}

