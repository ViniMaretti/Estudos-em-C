#include<stdio.h>
#include<string.h>
#include<locale.h>
#define TAM 50

struct livro{
    char titulo[TAM];
    char autor [TAM];
    int ano;  
};

typedef struct livro livro;

void imprimirLivro(livro livro){
    printf("O titulo do livro e: %s", livro.titulo);
    printf("O autor do livro e: %s", livro.autor);
    printf("O ano do livro e: %d", livro.ano );
    printf("\n");

}
void usuario1(livro usuario){
    printf("O titulo do livro do usuario e: %s\n", usuario.titulo);
    printf("O autor do livro do usuario e: %s\n", usuario.autor);
    printf("O ano de lancamento do livro do usuario e: %d\n", usuario.ano);
    printf("\n");
}

int main(){
    setlocale(LC_ALL, "Portuguese");

livro livro1 = {"A arte da programacao", "Donald Knuth", 1968};
livro livro2 = {"Cem Anos de Solidao", "Gabriel Garcia Marquez", 1967};

printf("\n Detelhes do livro 1 \n");
imprimirLivro(livro1);

printf("\n Detalhes do livro 2\n");
imprimirLivro(livro2);

livro usuario;

char resp;

do{

    printf("\nDigite o livro de sua preferencia\n");
    fflush(stdin);
    fgets(usuario.titulo, TAM, stdin);
    printf("\nDigite o autor do livro de sua preferencia\n");
    fflush(stdin);
    fgets(usuario.autor, TAM, stdin);
    printf("\nDigite o ano de lancamento do livro\n");
    scanf("%d", &usuario.ano);

printf("\nDetalhes do livro do usuario\n");
usuario1(usuario);

printf("\n");

printf("Deseja colocar mais algum livro ? [s]im, [N]ao");
fflush(stdin);
resp = getchar();
resp = toupper(resp);

}while(resp == 'S');



}

