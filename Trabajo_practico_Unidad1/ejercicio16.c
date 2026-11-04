#include <stdio.h>

int main() {
    float radio, longitud, minimo;
    int es_valido, contador;
    float PI;
    
    PI = 3.14159;
    radio = 0;
    longitud = 0;
    minimo = 0;
    es_valido = 0;
    contador = 0;
    
    printf("Ingrese el radio de la circunferencia: ");
    scanf("%f", &radio);
    contador = contador + 1;
    
    if (radio > 0) {
        es_valido = 1;
        longitud = 2.0 * PI * radio;
        contador = contador + 1;
        
        minimo = radio;
        if (longitud < minimo) {
            minimo = longitud;
        }
        if (PI < minimo) {
            minimo = PI;
        }
        
        printf("La longitud de la circunferencia es: %.2f\n", longitud);
    } else {
        es_valido = 0;
        printf("Error: El radio debe ser mayor que cero.\n");
    }
    
    printf("Evaluacion relacional (radio > 0): %d\n", es_valido);
    printf("Valor minimo de las variables: %.2f\n", minimo);
    printf("Contador de operaciones: %d\n", contador);

    return 0;
    
}