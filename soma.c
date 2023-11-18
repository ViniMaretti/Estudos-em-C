#include<stdio.h>



int main(){

int i,N, soma = 0;

printf("Quantos numeros vc vai digitar ? ");
scanf("%d", &N);

int vet[N];

for(i=0;i<N;i++){
    printf("Digite o %i numero ", i+1);
    scanf("%d", &vet[i]);
}

for(i=0;i<N; i++){
soma += vet[i];
}
for(i=0;i<N;i++){
    printf("resultado %d = %d\n ",i+1, vet[i]);
}
for(i=0;i<N;i++){
    printf("%d+", vet[i]);
    
}
printf(" = %.2d", soma);
return 0;OI
}