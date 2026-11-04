#include <stdio.h>

int main() {
    int c, triple;
    int es_par_positivo;
    
    c = 0;
    triple = 0;
    es_par_positivo = 0;
    
    printf("Ingrese un numero entero c: ");
    scanf("%d", &c);
    
    if ((c % 2 == 0) && (c > 0)) {
        es_par_positivo = 1;
        triple = c * 3; // Calcula el triple si es positivo
    } else {
        es_par_positivo = 0;
        triple = 0;
    }
    
    if (es_par_positivo == 1) {
        printf("\n[INFORMACION]: El numero ingresado es par y positivo.\n");
        printf("El triple del numero es: %d\n", triple);
    } else {
        printf("\n[INFORMACION]: El numero NO cumple con ser par y positivo.\n");
    }

    printf("\n Tipos de Datos y Variables Utilizadas \n");
    printf("1. Variable 'c' (Tipo de dato: int / Entero) = %d\n", c);
    printf("2. Variable 'es_par_positivo' (Tipo de dato: int / Booleano) = %d\n", es_par_positivo);
    printf("3. Variable 'triple' (Tipo de dato: int / Entero) = %d\n", triple);
   
    printf("\n Resumen de Ejecucion \n");
    printf("Operacion finalizada con exito en la tienda de ropa.\n");

    return 0;
}