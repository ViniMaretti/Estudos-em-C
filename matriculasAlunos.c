#include<stdio.h>

int main(){

int i,j;
int matematica[4];
int logica[4];


for(i=0;i<4;i++){
    printf("DIGITE SEU NUMERO DE MATRICULA PARA O CURSO DE MATEMATICA: ");
    scanf("%d", &matematica[i]);

}
printf("\n");
for(j=0;j<4;j++){
    printf("GIGITE SEU NUMERO DE MATRICAULA PARA O CURSO DE LOGICA:  ");
    scanf("%d", &logica[j]);

}
 printf("ALUNOS MATRICULADOS NO MESMO CURSO \n ");

for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        if (matematica[i] == logica[j]){
            printf("%d\n",matematica[i]);

        }
    }
}

return 0 ;

}

