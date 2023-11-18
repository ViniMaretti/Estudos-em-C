#include<stdio.h>
#include<stdlib.h>

int main(){

int i,j;
int somaHorizontal[4]={0};
int somaVertical[4]={0};
int matrix[4][4];

for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf("\nProduto %d da filial %d ", i+1, j+1);
        scanf("%d", &matrix[i][j]);
    }
}

for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        somaVertical[i]+=matrix[i][j];
}
}
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        somaHorizontal[i]+= matrix[j][i];
    }
}
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf("\t %d", matrix[i][j]);
    }
    printf(" total =\t %d", somaVertical[i]);
    printf("\n");
}
printf("--------------------------------------\n");
for(i=0;i<4;i++){
printf("\t %d", somaHorizontal[i]);
}
}