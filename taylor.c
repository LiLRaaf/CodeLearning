#include <stdio.h>

int main() {
    // Declaração da matriz 3x3
    int matriz[3][3];
    int i, j;
    
    // Leitura da matriz da entrada padrão
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // Cálculo da média de todos os valores
    int soma = 0;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }
    float media = soma / 9.0; // 9 elementos total
    
    // Encontra o maior valor
    int maior = matriz[0][0];
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    
    // Calcula o delta
    int delta;
    if(maior > 0) {
        delta = 1;
    } else if(maior < 0) {
        delta = -1;
    } else {
        delta = 0;
    }
    
    // Calcula a soma da diagonal principal
    // Diagonal principal: elementos onde i == j
    int somaDiagonal = 0;
    for(i = 0; i < 3; i++) {
        somaDiagonal += matriz[i][i];
    }
    
    // Exibe os resultados: média (2 casas decimais), maior valor, delta, soma da diagonal
    printf("%.2f %d %d %d\n", media, maior, delta, somaDiagonal);
    
    return 0;
}
