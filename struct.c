#include<stdio.h>
#include<string.h>
#include<locale.h>

#define TAM 50

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa pessoa;

int main(){
    setlocale(LC_ALL, "Portuguese");

    pessoa dados = {0,0.0,"Teste"};

    printf("início:\n");
    printf("dados.idade: %d\n", dados.idade);
    printf("Dados.peso: %f\n", dados.peso);
    printf("Dados.nome: %s\n", dados.nome);

dados.idade = 10;
dados.peso = 99.99;
strcpy(dados.nome, "Texto");

  printf("\nAlteracao dos dados:\n");
    printf("dados.idade: %d\n", dados.idade);
    printf("Dados.peso: %.2f\n", dados.peso);
    printf("Dados.nome: %s\n", dados.nome);

printf("\nDigite a idade da pessoa\n");
scanf("%d",&dados.idade);
printf("Digite o peso da pessoa\n");
scanf("%f", &dados.peso);
fflush(stdin);
printf("Digite o nome da pessoa\n");
fflush(stdin);
scanf("%s", &dados.nome);

 printf("\nInteracao com usuario:\n");
    printf("dados.idade: %d\n", dados.idade);
    printf("Dados.peso: %.2f\n", dados.peso);
    printf("Dados.nome: %s\n", dados.nome);







}
