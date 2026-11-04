#include <stdio.h>

int main() {
    int anio, es_milenio_nuevo;
    int paridad_tipo; // 1 para "par" (nuevo), 0 para "impar" (no nuevo)
    
    anio = 0;
    es_milenio_nuevo = 0;
    
    printf("Ingrese un ano: ");
    scanf("%d", &anio);
    
    if (anio > 2000) {
        es_milenio_nuevo = 1;
        printf("El ano pertenece al nuevo milenio\n");
    } else {
        es_milenio_nuevo = 0;
        printf("El ano NO pertenece al nuevo milenio\n");
    }
    
    if (es_milenio_nuevo == 0) {
        paridad_tipo = 0; // Representa "par"
    } else {
        paridad_tipo = 1; // Representa "impar"
    }
    
    printf("es_milenio_nuevo: %d\n", es_milenio_nuevo);
    if (paridad_tipo == 0) {
        printf("El resultado es par\n");
    } else {
        printf("El resultado es impar\n");
    }

    return 0;
}