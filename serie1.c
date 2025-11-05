#include <stdio.h>
#include <math.h> 

double soma_serie(int i, int n){
    if (i > n) return 0;
    
    return (1.0 / (i * i)) + soma_serie(i + 1, n);
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%.6lf\n", soma_serie(1, n));

    return 0;
}