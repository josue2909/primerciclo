#include <stdio.h>

int main() {
    int z, es_multiplo_4, doble;
    
    z = 0;
    es_multiplo_4 = 0;
    doble = 0;
    
    printf("Ingrese un numero entero: ");
    scanf("%d", &z);
    
    if ((z % 4 == 0) && (z != 0)) {
        es_multiplo_4 = 1;
        printf("El numero SI es multiplo de 4\n");
    } else {
        es_multiplo_4 = 0;
        printf("El numero NO es multiplo de 4\n");
    }
    
    doble = es_multiplo_4 * 2;
    
    printf("es_multiplo_4: %d\n", es_multiplo_4);
    printf("El doble del resultado es: %d\n", doble);

    return 0;
    
}