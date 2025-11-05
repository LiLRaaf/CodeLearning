#include <stdio.h>



int main (){

    int x;
    scanf ("%d", &x);

    if (x >= 60){
        printf("%d Gratuito\n", x);
    }
     else {
        printf ("%d Pagante\n", x);
     }


    return 0;
}