#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main(){

char nomeVendedor[5][10];    
float totalVendas[5], somaVendas = 0;
int i;
float comissao = 0;
float maiorValor=0, menorValor=0;


for(i=0;i<5;i++){
printf("\nDigite aqui o %d nome " ,i+1);
fflush(stdin);
fgets(nomeVendedor[i],10, stdin);
fflush(stdin);
}

for(i=0;i<5;i++){

printf("\nDigite o total de vendas de %s ", nomeVendedor[i]);
scanf("%f", &totalVendas[i]);

}
printf("\nRelatorio\n");
for(i=0;i<5;i++){
comissao = totalVendas[i] * 0.5;
printf("Total a receber vendedor %s = %.1f\n", nomeVendedor[i], comissao);
 
}

for(i=0;i<5;i++){
somaVendas += totalVendas[i];
}
printf("A soma de todas as vendas e igaul a %.2f", somaVendas);

maiorValor = totalVendas[0];

for(i=1;i<5;i++){
if(totalVendas[i] > maiorValor){
    maiorValor = totalVendas[i];
}

} 

menorValor = totalVendas[0];

for(i=1;i<5;i++){
if(totalVendas[i] < menorValor){
    menorValor = totalVendas[i];
}
}

printf("\nMaior valor de venda = %.2f\n", maiorValor);
printf("Menor valor de venda = %.2f", menorValor);

return 0 ;


}