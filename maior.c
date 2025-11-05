#include <stdio.h>

int main() {

    int a, b;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("O maior numero eh: %d\n", a);
    } else if (a < b) {
        printf("O maior numero eh: %d\n", b);
    } else {
        printf("Os numeros sao iguais\n");
    }

    return 0;
}