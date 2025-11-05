#include <stdio.h>



int FAT(int x){
    if (x == 0 || x == 1){
        return 1;
    }
    else{
        return x * FAT(x - 1);
    }
}

int main(){
    int x, f;
    scanf("%d", &x);
    f = FAT(x); 
    printf("%d\n", f);




return 0;
}