#include <stdio.h>

int main() {
    float a, b, mayor, umbral;
    int es_mayor_umbral;
    
    a = 0;
    b = 0;
    mayor = 0;
    umbral = 10.0; // Umbral predefinido
    es_mayor_umbral = 0;
    
    printf("Ingrese el primer numero real: ");
    scanf("%f", &a);
    
    printf("Ingrese el segundo numero real: ");
    scanf("%f", &b);
   
    if (a > b) {
        mayor = a;
    } else {
        mayor = b;
    }
   
    if (mayor > umbral) {
        es_mayor_umbral = 1;
    } else {
        es_mayor_umbral = 0;
    }
    
    printf("\n Resultados de la Cafeteria \n");
    printf("El numero mayor de los dos es: %.2f\n", mayor);
    printf("El resultado supera el umbral predefinido (10.0) [1=Si, 0=No]: %d\n", es_mayor_umbral);
    printf("Referencia de comparacion evaluada utilizando la constante literal 0.\n");
   
    printf("\n Resumen de Datos Ingresados \n");
    printf("Primer numero (a): %.2f\n", a);
    printf("Segundo numero (b): %.2f\n", b);

    return 0;
    
}