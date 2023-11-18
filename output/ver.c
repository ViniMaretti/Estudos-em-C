#include<stdio.h>

 

int main()
{
    int mat[4][4];
    int totalP;
    int totalProduto[4] = {0};
    int totalFilial [4] = {0};
    int i, j;

 

    // ENTRADA
    for(i = 0; i<4; i++)
    {
        for(j = 0; j<4; j++)
        {
            printf("\n Digite produto %d na filial %d: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
            fflush(stdin);
        }
    }

 

 

     // PROCESSADOR
    for(i = 0; i<4; i++)
    {
        for(j = 0; j<4; j++)
        {

 

            totalProduto[i] = totalProduto[i] +  mat[i][j];

 

        }
    }

 

    for(i = 0; i<4; i++)
    {
        for(j = 0; j<4; j++)
        {

 

            totalFilial[i] = totalFilial[i] +  mat[j][i];

 

        }
    }

 

    for(i = 0; i<4; i++)
    {
        for(j = 0; j<4; j++)
        {

 

            printf(" %d \t",mat[i][j]);

 

        }
            printf(" = %d \t",totalProduto[i]);
            printf("\n");

 

    }
    printf("--------------------------------------\n");
    for(i = 0; i< 4; i++){
        printf(" %d \t",totalFilial[i]);
    }

 

 

}