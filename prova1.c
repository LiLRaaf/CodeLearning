#include <stdio.h>

int main() {
    int p1, p2;
    scanf("%d %d", &p1, &p2);
    
    double area1 = 0.0, area2 = 0.0;
    
    if (p1 == 1) { 
        double base, altura;
        scanf("%lf %lf", &base, &altura);
        area1 = (base * altura) / 2.0;
    } else if (p1 == 2) {
        double base, altura;
        scanf("%lf %lf", &base, &altura);
        area1 = base * altura;
    } else if (p1 == 3) { 
        double lado;
        scanf("%lf", &lado);
        area1 = lado * lado;
    }
    
    
    if (p2 == 1) { 
        double base, altura;
        scanf("%lf %lf", &base, &altura);
        area2 = (base * altura) / 2.0;
    } else if (p2 == 2) { 
        double base, altura;
        scanf("%lf %lf", &base, &altura);
        area2 = base * altura;
    } else if (p2 == 3) { 
        double lado;
        scanf("%lf", &lado);
        area2 = lado * lado;
    }
    
    
    if (area1 > area2) {
        printf("P1 venceu!\n");
    } else if (area2 > area1) {
        printf("P2 venceu!\n");
    } else {
        printf("Empate\n");
    }
    
    return 0;
}