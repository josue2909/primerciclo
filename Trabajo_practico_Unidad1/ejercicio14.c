#include <stdio.h>

int main() {
    float mph, ms, FACTOR, inverso;
    int es_positivo;
    
    mph = 0;
    ms = 0;
    FACTOR = 0.44704;
    inverso = 0;
    es_positivo = 0;
    
    printf("Ingrese la velocidad en mph: ");
    scanf("%f", &mph);
 
    if (mph > 0) {
        es_positivo = 1;
        ms = mph * FACTOR;
        
        if (ms != 0) {
            inverso = 1.0 / ms;
        } else {
            inverso = 0;
        }
        
    } else {
        es_positivo = 0;
        printf("Error: Ingrese un valor de velocidad positivo.\n");
    }
    
    if (es_positivo == 1) {
        printf("\n Resultados del Banco \n");
        printf("%.2f mph equivalen a %.4f m/s\n", mph, ms);
        printf("El inverso del resultado es: %.4f\n", inverso);
    }
    
    printf("\n Validaciones y Control \n");
    printf("Evaluacion relacional / validacion positiva (1=Valido, 0=Invalido): %d\n", es_positivo);
    printf("El valor minimo de las variables utilizadas es 0\n");
    
    printf("\n Resumen de Datos Ingresados \n");
    printf("Velocidad ingresada: %.2f mph\n", mph);

    return 0;
    
}