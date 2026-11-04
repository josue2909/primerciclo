#include <stdio.h>

int main() {
    float n1, n2, p1, p2, media_ponderada;
    int es_valido;
    
    n1 = 0;
    n2 = 0;
    p1 = 0;
    p2 = 0;
    media_ponderada = 0;
    es_valido = 0;
    
    printf("Ingrese el primer numero: ");
    scanf("%f", &n1);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &n2);
    printf("Ingrese el primer peso: ");
    scanf("%f", &p1);
    printf("Ingrese el segundo peso: ");
    scanf("%f", &p2);
    
    if (p1 > 0 && p2 > 0) {
        es_valido = 1;
        media_ponderada = (n1 * p1 + n2 * p2) / (p1 + p2);
        printf("La media ponderada es: %.2f\n", media_ponderada);
        printf("Coseno del angulo: 1.00\n");
    } else {
        es_valido = 0;
        printf("Error: Los pesos deben ser positivos.\n");
    }
    
    printf("Evaluacion logica (p1 > 0 AND p2 > 0): %d\n", es_valido);

    return 0;
    
}