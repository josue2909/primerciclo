#include <stdio.h>

int main() {
    float peso, altura, imc, imc_cuadrado;
    int bajo_peso, sobrepeso;
    
    peso = 0;
    altura = 0;
    imc = 0;
    imc_cuadrado = 0;
    bajo_peso = 0;
    sobrepeso = 0;
    
    printf("Ingrese el peso en kg: ");
    scanf("%f", &peso);
    
    printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    imc_cuadrado = imc * imc;

    if ((imc < 18.5)) {
        bajo_peso = 1;
    } else {
        bajo_peso = 0;
    }
    
    if ((imc > 25.0)) {
        sobrepeso = 1;
    } else {
        sobrepeso = 0;
    }
    
    printf("\n Resultados \n");
    printf("Su IMC es: %.2f\n", imc);
    printf("El cuadrado del IMC es: %.2f\n", imc_cuadrado);
    
    if (bajo_peso == 1) {
        printf("Estado: Esta bajo el rango normal.\n");
    } else {
        if (sobrepeso == 1) {
            printf("Estado: Esta sobre el rango normal.\n");
        } else {
            printf("Estado: Se encuentra en el rango normal.\n");
        }
    }
    
    printf("\n Variables Auxiliares y Control \n");
    printf("Variable auxiliar bajo_peso (1=Si, 0=No): %d\n", bajo_peso);
    printf("Variable auxiliar sobrepeso (1=Si, 0=No): %d\n", sobrepeso);
        
    printf("\n Resumen de Datos Ingresados \n");
    printf("Peso ingresado: %.2f kg\n", peso);
    printf("Altura ingresada: %.2f m\n", altura);

    return 0;
}