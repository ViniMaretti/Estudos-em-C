#include<stdio.h>

int main(){
char nmr1[3];
char nmr2[5];
int i,j;


puts("Sala 1");
printf("Qual curso voce esta fazendo [M]Matematica || [P]Programacao\n ");
for(i=0; i<5; i++){
    scanf(" %c",&nmr1[i] );
}


puts("Sala 2");
printf("Qual curso voce esta fazendo [M]Matematica || [P] Programacao\n ");
for(j=0; j<3; j++){
scanf(" %c", &nmr2[j]);
}

for(i=0; i<5; i++){
    for(j=0; j<3; j++){
        if(nmr1[i] == nmr2[j]){
            printf("\n");
            printf("%c\n", nmr1[i]);
            break;
        }
    }
}


return 0;


}