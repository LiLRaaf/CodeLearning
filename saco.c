#include <stdio.h>
#include <math.h>

/**
 * Calculates the sum of powers of 2 from 2^1 to 2^i
 * Formula: 2^1 + 2^2 + 2^3 + ... + 2^i
 * This is equivalent to 2^(i+1) - 2
 */
int soma(int i) {
    // Base case: if i is 0 or negative, return 0
    if (i <= 0) {
        return 0;
    }
    // Base case: if i is 1, return 2^1 = 2
    if (i == 1) {
        return 2;
    }
    // Recursive case: 2^i + sum of previous powers
    return (1 << i) + soma(i - 1);
}

int main() {
    int y, pg1;
    
    printf("Digite um número inteiro positivo: ");
    
    // Input validation
    if (scanf("%d", &y) != 1) {
        printf("Erro: Entrada inválida!\n");
        return 1;
    }
    
    // Check for negative input
    if (y < 0) {
        printf("Erro: Por favor, digite um número não-negativo!\n");
        return 1;
    }
    
    // Calculate the sum
    pg1 = soma(y);
    
    // Display result with explanation
    printf("A soma das potências de 2 de 2^1 até 2^%d é: %d\n", y, pg1);
    
    // Optional: show the mathematical formula result for verification
    if (y > 0) {
        int expected = (1 << (y + 1)) - 2;
        printf("Verificação (2^(%d+1) - 2): %d\n", y, expected);
    }
    
    return 0;
}