#include<ctype.h>
#include<string.h>
#include<stdio.h>

int main(){
    char s[10];
printf("Digite alguma frase\n");
scanf("%s", s);
fflush(stdin);

printf("RESULTADO = %s\n\n",s);

printf("digite outro nome");
scanf("%9[^\n]",s);
fflush(stdin);
printf("RESULTADO = %s\n\n", s);

}