#include <stdio.h>

int main() {
    float grados, radianes, inverso;
    int es_valido;
    float PI, DIVISOR;
    
    PI = 3.14159;
    DIVISOR = 180.0;
    grados = 0;
    radianes = 0;
    inverso = 0;
    es_valido = 0;
    
    printf("Ingrese el angulo en grados: ");
    scanf("%f", &grados);
    
    if (grados >= 0) {
        es_valido = 1;
        radianes = grados * PI / DIVISOR;
        
        if (radianes != 0) {
            inverso = 1.0 / radianes;
        } else {
            inverso = 0;
        }
        
        printf("El angulo en radianes es: %.4f\n", radianes);
        printf("El inverso multiplicativo es: %.4f\n", inverso);
    } else {
        es_valido = 0;
        printf("Error: El angulo debe ser mayor o igual a cero.\n");
    }
    
    printf("Evaluacion logica (grados >= 0): %d\n", es_valido);
    printf("Resumen -> Grados ingresados: %.2f\n", grados);

    return 0;
    
}