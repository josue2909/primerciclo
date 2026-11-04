#include <stdio.h>
#include <math.h>

int main() {
    float numero, raiz, resultado_factorial;
    int es_positivo, parte_entera;
    
    numero = 0;
    raiz = 0;
    resultado_factorial = 1;
    es_positivo = 0;
    parte_entera = 0;
    
    printf("Ingrese un numero real positivo: ");
    scanf("%f", &numero);
  
    if (numero > 0) {
        es_positivo = 1;
        raiz = sqrt(numero); 
        parte_entera = (int)raiz;
      
        if (parte_entera > 0 && parte_entera < 10) {
            if (parte_entera == 1) { resultado_factorial = 1; }
            else {
                if (parte_entera == 2) { resultado_factorial = 2; }
                else {
                    if (parte_entera == 3) { resultado_factorial = 6; }
                    else {
                        if (parte_entera == 4) { resultado_factorial = 24; }
                        else {
                            if (parte_entera == 5) { resultado_factorial = 120; }
                            else {
                                if (parte_entera == 6) { resultado_factorial = 720; }
                                else {
                                    if (parte_entera == 7) { resultado_factorial = 5040; }
                                    else {
                                        if (parte_entera == 8) { resultado_factorial = 40320; }
                                        else { resultado_factorial = 362880; }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            resultado_factorial = 0;
        }
        
    } else {
        es_positivo = 0;
        printf("Error: Ingrese un numero valido mayor que 0.\n");
    }

    if (es_positivo == 1) {
        printf("\n Resultados \n");
        printf("La raiz cuadrada de %.2f es %.2f\n", numero, raiz);
        
        if (parte_entera > 0 && parte_entera < 10) {
            printf("El factorial del resultado entero (%d) es: %.0f\n", parte_entera, resultado_factorial);
        } else {
            printf("El resultado no cumple con ser un entero positivo menor que 10 para el factorial.\n");
        }
    }
    
    printf("\n Validaciones y Control \n");
    printf("Evaluacion (numero > 0): %d\n", es_positivo);
      
    printf("\n Resumen de Datos Ingresados \n");
    printf("Numero ingresado: %.2f\n", numero);

    return 0;
}