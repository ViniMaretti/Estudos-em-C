#include <stdio.h>
#include<ctype.h>
#include <stdlib.h>
float preco_unitario;

float calcular_imposto(float preco_unitario) {
    if (preco_unitario <= 100.00) {
        return preco_unitario * 0.05;
    } else {
        return preco_unitario * 0.10;
    }
}

float calcular_transporte(int pais_origem, char meio_transporte) {
    if (meio_transporte == 'A') {
        if (pais_origem == 2) {  // México
            return preco_unitario * 0.5;
        } else if (pais_origem == 1) {  // EUA
            return 35.00;
        } else if (pais_origem == 3) {  // Outros
            return 24.00;
        }
    } else {  // Terrestre (T) ou Fluvial (F)
        if (pais_origem == 1) {  // EUA
            return 5.00;
        } else if (pais_origem == 2) {  // México
            return 37.00;
        } else if (pais_origem == 3) {  // Outros
            return 60.00;
        }
    }
}

float calcular_seguro(int pais_origem, char meio_transporte) {
    if (pais_origem == 2 || meio_transporte == 'A') {
        return preco_unitario * 0.5;
    } else {
        return 0.0;
    }
}

int main() {
    float preco_unitario;
    int pais_origem;
    char meio_transporte, carga_perigosa;

    while (1) {
        printf("Digite o preço unitário do produto (R$): ");
        scanf("%f", &preco_unitario);
        printf("Digite o país de origem (1 – EUA, 2 – México, 3 - Outros): ");
        scanf("%d", &pais_origem);
        printf("Digite o meio de transporte (T – Terrestre, F- Fluvial, A- Aéreo): ");
        scanf(" %c", &meio_transporte);
        printf("A carga é perigosa? (S – Sim e N - Não): ");
        scanf(" %c", &carga_perigosa);

        float imposto = calcular_imposto(preco_unitario);
        float transporte = calcular_transporte(pais_origem, meio_transporte);
        float seguro = calcular_seguro(pais_origem, meio_transporte);

        float valor_final = preco_unitario + imposto + transporte + seguro;

        printf("Imposto: R$ %.2f - Transporte: R$ %.2f - Seguro: R$ %.2f => Valor final do Produto: R$ %.2f\n", imposto, transporte, seguro, valor_final);

        char continuar;
        printf("Deseja calcular o valor de outro produto? (S/N): ");
        scanf(" %c", &continuar);
        if (continuar != 'S' && continuar != 's') {
            break;
        }
    }

    printf("Fim do programa.\n");

    return 0;
}
