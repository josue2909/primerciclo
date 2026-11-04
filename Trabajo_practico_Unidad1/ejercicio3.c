#include <stdio.h>

int main() {
    float vel_inicial, aceleracion, tiempo;
    float vel_final, distancia;
    int condicion; // 1 para verdadero, 0 para falso
    
    vel_inicial = 0;
    aceleracion = 0;
    tiempo = 0;
    
    printf("Ingrese la velocidad inicial: ");
    scanf("%f", &vel_inicial);
    
    printf("Ingrese la aceleracion: ");
    scanf("%f", &aceleracion);
    
    printf("Ingrese el tiempo: ");
    scanf("%f", &tiempo);
    
    vel_final = vel_inicial + (aceleracion * tiempo);
    distancia = (vel_inicial * tiempo) + (aceleracion * tiempo * tiempo) / 2.0;
    
    if (tiempo >= 0 && aceleracion != 0) {
        condicion = 1; 
    } else {
        condicion = 0; 
    }
    
    printf("La velocidad final es: %.2f\n", vel_final);
    printf("La distancia es: %.2f\n", distancia);
    printf("Condicion (tiempo >= 0 Y aceleracion != 0): %d\n", condicion);
    printf("El valor minimo de las variables utilizadas es 0\n");

    return 0;
    
}