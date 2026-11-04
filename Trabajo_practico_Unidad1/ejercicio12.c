#include <stdio.h>

int main() {
    float kilometros, litros, rendimiento, RENDIMIENTO_IDEAL, suma_rendimientos, media;
    int es_eficiente;
    
    kilometros = 0;
    litros = 0;
    rendimiento = 0;
    RENDIMIENTO_IDEAL = 12.0;
    suma_rendimientos = 25.5; // Base acumulada para simular el cálculo de varios resultados
    media = 0;
    es_eficiente = 0;
    
    printf("--- Lista de Variables a Utilizar ---\n");
    printf("kilometros, litros, rendimiento, RENDIMIENTO_IDEAL, es_eficiente, suma_rendimientos, media\n\n");
    
    printf("Ingrese los kilometros recorridos: ");
    scanf("%f", &kilometros);
    
    printf("Ingrese los litros consumidos: ");
    scanf("%f", &litros);
    
    rendimiento = kilometros / litros;
    suma_rendimientos = suma_rendimientos + rendimiento;
    media = suma_rendimientos / 2.0;
    
    if (rendimiento >= RENDIMIENTO_IDEAL) {
        es_eficiente = 1;
    } else {
        es_eficiente = 0;
    }
    
    printf("\n Resultados de la Aseguradora \n");
    printf("El rendimiento del vehiculo es: %.2f km/L\n", rendimiento);
    
    if (es_eficiente == 1) {
        printf("Estado: El vehiculo es eficiente (>= 12.0).\n");
    } else {
        printf("Estado: El vehiculo NO es eficiente (< 12.0).\n");
    }
    
    printf("Media aritmetica de los rendimientos: %.2f\n", media);
        
    printf("\n Resumen de Datos Ingresados \n");
    printf("Kilometros ingresados: %.2f\n", kilometros);
    printf("Litros ingresados: %.2f\n", litros);

    return 0;

}