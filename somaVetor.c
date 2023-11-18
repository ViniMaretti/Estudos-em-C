#include<stdio.h>

int main(){

int N, i;
double soma=0, media;

printf("Quantos numeros voce vai digitar ? ");
scanf("%i", &N);

double vet[N];

for(i=0; i<N; i++){
    printf("Digite o %i numero", i+1);
    scanf("%lf", &vet[i]);
}

puts("\n VALORES: ");
for (i=0; i<N; i++){
printf("%.1lf ", vet[i]);
printf("\n");
}


for(i=0;i<N; i++){
soma += vet[i];
}
printf("Soma  = %.2lf\n", soma);
media = soma / N;
printf("Media = %.2lf\n", media);

return 0;
}