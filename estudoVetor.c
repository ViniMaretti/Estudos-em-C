#include<stdio.h>

int main(){

int i, N ;


printf("Quantos numeros voce vai digitar ?");
scanf("%d", &N);

int vet[N];

for(i=0;i<N;i++){
    printf("Digite o %i numero", i+1);
    scanf("%d", &vet[i]);
}

for(i=0;i<N;i++){
    if (vet[i] == 30){
        printf("\n%d", i);
    }
}

}

