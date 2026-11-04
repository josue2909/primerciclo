#include <stdio.h>

int main() {
    float galones, litros, resultado_pi;
    int es_positivo;
    
    float GALON_LITRO = 3.78541;
    float PI = 3.14159;
    
    galones = 0;
    litros = 0;
    resultado_pi = 0;
    
    printf("Ingrese el volumen en galones: ");
    scanf("%f", &galones);
    
    litros = galones * GALON_LITRO;
    resultado_pi = litros * PI;
    
    if ((litros > 0)) {
        es_positivo = 1;
    } else {
        es_positivo = 0;
    }

    printf("\n Resultados \n");
    printf("%.2f galones equivalen a %.2f litros\n", galones, litros);
    printf("Producto del resultado por PI: %.2f\n", resultado_pi);
    printf("Tipo de operacion realizada: Conversion de volumen (multiplicacion)\n");
    printf("Evaluacion (litros > 0): %d\n", es_positivo);
    printf("El valor minimo de las variables utilizadas es 0\n");
 
    printf("\n Resumen de Datos Ingresados \n");
    printf("Galones ingresados: %.2f\n", galones);

    return 0;
}