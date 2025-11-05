#include <stdio.h>

void multiplo5(int x, int n){
    if (x <= n){

        multiplo5(x + 5, n);
        printf("%d\n ", x);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    multiplo5(5, n);

    return 0;
}