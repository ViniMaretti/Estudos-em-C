#include<stdio.h>

int main(){

int i=0;
float num[5], somaNegativo, positivo;


for(i=0;i<5;i++){ 
printf("Digite o %d numero ", i+1);
scanf("%f", &num[i]);
fflush(stdin);
}
printf("\n");

for(i=0;i<5;i++){
    if(num[i]<0){
        printf("negativos = %.2f\n", num[i]);
}
else{
    printf("\nPositivos = %.2f", num[i]);
}
}

printf("\n");

for(i=0;i<5;i++){
    if(num[i]<0){
        somaNegativo+=num[i];
    }else{
        positivo += num[i];
    }
}
printf("\n");
printf("soma dos negativos = %.2f\n", somaNegativo);
printf("\n");
printf("soma dos positivos = %.2f\n", positivo);







return 0;
}

