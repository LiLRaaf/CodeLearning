#include <stdio.h>

int main (){

    int x;
    scanf("%d", &x);

    if (x % 5 == 0)
    {
        printf ("%d é multiplo\n", x);
    }

    else {
        printf("%d não é multiplo\n", x);
    }
    




    return 0;
}