#include <stdio.h>

int main (){

    int a, b, c;
    int aux;
    scanf("%d %d %d", &a, &b, &c);

    if (b < a || c < a)
    {
       if (b < c){

        aux = a;
        b = a;
        c = aux;
       }
    
    if (c < b){
        aux = a;
        c = a;
        b = aux;
    }
    printf("%d\n%d\n%d\n", a, b, c);
    }

    
   
    

    return 0;
}