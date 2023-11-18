#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

char produto[50][50];
int qtde[20];
float custo[50];


void cadastro()
{
    char resposta;
    int i=0;
    do
    {
        printf(" CADASTRO \n \n");
        printf("QUAL PRODUTO VOCE VAI CADASTRAR \n");
        fgets(produto[i],50, stdin);


        printf("DIGITE A QUANTIDADE DO PRODUTO :");
        scanf("%d", &qtde[i]);
        fflush(stdin);

        printf("DIGITE O CUSTO DO PROUDUTO :");
        scanf("%f", &custo[i]);
        fflush(stdin);

        i++;

        printf("DESEJA FAZER MAIS ALGUM CADASTRO S[sim] || N[nao]? ");
        resposta = getchar();
        resposta=toupper(resposta);

    }
    while(resposta == 'S');

}



int main()
{
    cadastro();
}
