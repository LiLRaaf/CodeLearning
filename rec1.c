#include <stdio.h>

void count(int n, int state) {
    if (state % 5 == 0) {
        printf("%d ", state);
    }
    if (state == n)
    return ;
count( n,state+1);
}

int main() {
    int n;
    scanf("%d", &n);
    count(n,1);

    
    return 0;
}