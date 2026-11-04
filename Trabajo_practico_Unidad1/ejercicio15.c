#include <stdio.h>

int main() {
    float lado, perimetro;
    int es_positivo;
    int CUATRO;
    
    CUATRO = 4;
    lado = 0;
    perimetro = 0;
    es_positivo = 0;
    
    printf("Ingrese el lado del cuadrado: ");
    scanf("%f", &lado);
    
    if (lado > 0) {
        es_positivo = 1;
        perimetro = (float)CUATRO * lado;
        printf("El perimetro del cuadrado es: %.2f\n", perimetro);
        printf("Seno del angulo (90 grados): 1.00\n");
    } else {
        es_positivo = 0;
        printf("Error: El lado debe ser un valor positivo.\n");
    }
    
    printf("Evaluacion logica (lado > 0): %d\n", es_positivo);

    return 0;
    
}