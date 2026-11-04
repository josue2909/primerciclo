#include <stdio.h>

int main() {
    // Declaracion de variables
    float monto_compra;
    int annios_clienta;
    int tipo_membresia;  // 1 = bronce, 2 = silver, 3 = gold
    float factor;
    float puntos_base, puntos_extras, puntos_total;
    
    int puntos_por_dolar = 1;
    int bono_annios = 50;
    
    printf("Ingrese el valor del monto de compra: ");
    scanf("%f", &monto_compra);
    
    printf("Ingrese los annios como clienta: ");
    scanf("%d", &annios_clienta);
    
    printf("Tipo de membresia (1 = bronce, 2 = silver, 3 = gold): ");
    scanf("%d", &tipo_membresia);
        
    if (tipo_membresia == 1) {
        factor = 1.0;
    } else {
        if (tipo_membresia == 2) {
            factor = 1.5;
        } else {
            factor = 2.0;
        }
    }
    
    puntos_base = monto_compra * puntos_por_dolar;
    puntos_extras = annios_clienta * bono_annios;
    puntos_total = (puntos_base + puntos_extras) * factor;
    
    printf("Los puntos totales de fidelidad son: %.2f\n", puntos_total);
    printf("El valor minimo de las variables utilizadas es 0\n");
   
    return 0;
    
}