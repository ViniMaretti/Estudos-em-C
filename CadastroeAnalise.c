#include<stdio.h>
#include<ctype.h>

int main(){
int i, valorProduto[3], estoque[3], Maior,guardar,guardar2, Menor;
char produto[3][10];

for(i=0;i<3;i++){
    printf("\nPRODUTO A CADASTRAR: ");
    fflush(stdin);
    fgets(produto[i], 10, stdin);
    fflush(stdin);
    printf("VALOR DO PRODUTO CADASTRADO :");
    scanf("%d", &valorProduto[i]);
    printf("DIGITE A QUANTIDADE DO PRODUTO EM ESTOQUE: ");
    scanf("%d", &estoque[i]);
}
Maior=valorProduto[0];
for(i=0;i<3;i++){
    if(valorProduto[i] > Maior){
            Maior=valorProduto[i];
     guardar = i;
    }
}
Menor=estoque[0];
for(i=0;i<3;i++){
    if(estoque[i] < Menor ){
        Menor=estoque[i];
        guardar2 = i;
    }
}


printf(" %s tem o maior valor que e igual a %d ", produto[guardar], valorProduto[guardar]);
printf("%s tem apenas %d em estoque ",produto[guardar2], estoque[guardar2]);


}
