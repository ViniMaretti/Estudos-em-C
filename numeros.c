#include<stdio.h>

int main(){

int N, i;


printf("Quantos numeros voce vai digitar ? ");
scanf("%i", &N);

float vet[N];

for(i = 0; i < N; i++){
    printf("Digite o valor do numero:  ");
    scanf("%f", &vet[i]);
}

puts("resultado dos numeros");
for(i = 0; i < N; i++){
printf("%.2f\n", vet[i]);
}

return 0 ;

}