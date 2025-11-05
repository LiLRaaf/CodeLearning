#include <stdio.h>
#include <stdbool.h>

bool Primo(int n, int i) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;

    return Primo(n, i + 1);
}

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    if (Primo(n, 2))
        printf("é primo\n");
    else
        printf("não é primo\n");

    return 0;
}

