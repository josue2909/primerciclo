#include <stdio.h>

int main() {
    int anio, INICIO_SIGLO_XXI, FIN_SIGLO_XXI, es_siglo_xxi, max_variable;
    
    anio = 0;
    INICIO_SIGLO_XXI = 2001;
    FIN_SIGLO_XXI = 2100;
    es_siglo_xxi = 0;
    max_variable = 0;
    
    printf("Ingrese un ano: ");
    scanf("%d", &anio);
    
    if ((anio >= INICIO_SIGLO_XXI) && (anio <= FIN_SIGLO_XXI)) {
        es_siglo_xxi = 1;
    } else {
        es_siglo_xxi = 0;
    }
  
    max_variable = anio;
    if (INICIO_SIGLO_XXI > max_variable) {
        max_variable = INICIO_SIGLO_XXI;
    }
    if (FIN_SIGLO_XXI > max_variable) {
        max_variable = FIN_SIGLO_XXI;
    }
    if (es_siglo_xxi > max_variable) {
        max_variable = es_siglo_xxi;
    }
    
    printf("\n Resultados de la Gasolinera \n");
    if (es_siglo_xxi == 1) {
        printf("El ano %d SI pertenece al siglo XXI.\n", anio);
    } else {
        printf("El ano %d NO pertenece al siglo XXI.\n", anio);
    }
    
    printf("Variable es_siglo_xxi (1=Verdadero, 0=Falso): %d\n", es_siglo_xxi);
    printf("El valor maximo de las variables utilizadas es: %d\n", max_variable);
   
    printf("\n Resumen de Datos Ingresados \n");
    printf("Ano ingresado: %d\n", anio);

    return 0;
    
}