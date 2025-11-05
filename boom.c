#include <stdio.h>

int main () {

    int a;
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("%d é par\n", a);
    }
    else {
        printf("%d é impar\n", a);
    }
return 0;
}