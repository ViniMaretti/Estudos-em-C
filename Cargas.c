#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

float calcular_imposto(float precoUnitario){
    if (precoUnitario <= 100){
        return precoUnitario * 0.5;
    }else{
        return precoUnitario * 0.10;
    }
}
 
float calcular_seguro(float precoUnitario, char transporte, int paisorigem){
    if (transporte == 'A' || paisorigem == 2){
        return precoUnitario * 0.5;
    }else{
        return 0.0;
    }
}

float valor_transporte(int pais_origem, char carga_perigosa ){
    if (pais_origem == 1 && carga_perigosa == 'S'){
        return 5.00;
    }else if (pais_origem == 1 && carga_perigosa == 'N'){
        return 12.00;
    } else if (pais_origem == 2 && carga_perigosa == 'S'){
        return 35.00;
    }else if(pais_origem == 2 && carga_perigosa == 'N'){
        return 37.00;
    }else if(pais_origem == 3 && carga_perigosa == 'S'){
        return 24.00;
    }else if (pais_origem == 3 && carga_perigosa == 'N'){
        return 60.00;
    }
}

int main(){
float precoUnitario, valorTotal;
char meioTransporte;
int paisorigem;
char carga_perigosa;


printf("Qual o valor da carga ? ");
scanf("%f",&precoUnitario);

printf("Possui carga perigosa? ");
puts("\n[S]sim");
puts("[N]nao");
scanf(" %c", &carga_perigosa);
carga_perigosa=toupper(carga_perigosa);

printf("Qual o meio de transporte ? ");
puts("\n[A]--Aero");
puts("[F]--Fluvial");
puts("[T]--Terrestre");
scanf(" %c",&meioTransporte);
meioTransporte=toupper(meioTransporte);

printf("Qual o pais de origem ? ");
puts("\n[1]--EUA");
puts("[2]--Mexico");
puts("[3]--Outros");
scanf("%i", &paisorigem);


float seguro = calcular_seguro(precoUnitario,meioTransporte, paisorigem);
float imposto = calcular_imposto(precoUnitario);
float transporte = valor_transporte(paisorigem, carga_perigosa);

valorTotal = seguro + imposto + transporte + precoUnitario;

printf("Preco unitario do produto = %.2f\n", precoUnitario);
printf("Valor de transporte = %.2f\n", transporte);
printf("Imposto cobrado = %.2f\n", imposto);
printf("Seguro de pacote = %.2f\n", seguro);
printf("Total a pagar = %.2f\n", valorTotal);


return 0 ;

}