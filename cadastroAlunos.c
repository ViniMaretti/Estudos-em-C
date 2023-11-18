#include<stdio.h>

int main(){

char nome[3][10];
int i;
float notas[9];


for(i=0;i<3;i++){
    printf("Digite o nome");
    fflush(stdin);
    fgets(nome, 10,stdin);
    fflush(stdin);
    }

for(i=0;i<9;i++){
    printf("Digite a sua %f nota ", i+1);
}





}