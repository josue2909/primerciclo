#include <stdio.h>

int main() {
    float monto, tasa, propina, total;
    int calidad; // 1: Excelente, 2: Bueno, 3: Regular, 4: Malo
    int monto_valido;
    
    float PROPINA_E = 0.20;
    float PROPINA_B = 0.15;
    float PROPINA_R = 0.10;
    float PROPINA_M = 0.05;
    
    monto = 0;
    propina = 0;
    total = 0;
    tasa = 0;
    
    printf("Ingrese el monto de la cuenta: ");
    scanf("%f", &monto);
    
    printf("Ingrese la calidad del servicio (1: Excelente, 2: Bueno, 3: Regular, 4: Malo): ");
    scanf("%d", &calidad);
    
    if ((monto > 0)) {
        monto_valido = 1;
    } else {
        monto_valido = 0;
    }
    
    if (calidad == 1) {
        tasa = PROPINA_E;
    } else {
        if (calidad == 2) {
            tasa = PROPINA_B;
        } else {
            if (calidad == 3) {
                tasa = PROPINA_R;
            } else {
                tasa = PROPINA_M;
            }
        }
    }
    
    propina = monto * tasa;
    total = monto + propina;
    
    printf("\n Resultados \n");
    printf("Propina sugerida: %.2f\n", propina);
    printf("Total a pagar: %.2f\n", total);
    printf("Validacion (monto > 0): %d\n", monto_valido);
        
    printf("\n Resumen de Datos Ingresados \n");
    printf("Monto ingresado: %.2f\n", monto);
    printf("Calidad ingresada: %d\n", calidad);

    return 0;
    }