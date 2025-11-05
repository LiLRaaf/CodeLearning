#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 501

void para_maiusculo(char str[], int i){

    if(str[i] == '\0') return;

    if (str[i] >= 'a' && str[i] <= 'z'){

    str[i] = str[i] - ('a' - 'A');
    }

    para_maiusculo(str, i + 1);
}

int tamanho(char str[], int i){

    if (str[i] == '\0') return i;
    return tamanho(str, i + 1);
}

int main() {
	
    char str[MAX];
    
    if (!fgets(str, sizeof str, stdin)) return 1;
    str[strcspn(str, "\n")] = '\0';

    printf("%d\n", tamanho(str, 0));
    
    
    
    
    return 0;
}
