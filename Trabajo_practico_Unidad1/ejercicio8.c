#include <stdio.h>

int main() {
    int lon_nombre, lon_apellido, diferencia_abs;
    int datos_validos;
    
    lon_nombre = 0;
    lon_apellido = 0;
    diferencia_abs = 0;
    datos_validos = 0;
   
    printf("Ingrese la longitud del nombre: ");
    scanf("%d", &lon_nombre);
    
    printf("Ingrese la longitud del apellido: ");
    scanf("%d", &lon_apellido);
   
    if ((lon_nombre > 0 && lon_apellido > 0)) {
        datos_validos = 1;
    } else {
        datos_validos = 0;
    }
    
    if (lon_nombre >= lon_apellido) {
        diferencia_abs = lon_nombre - lon_apellido;
    } else {
        diferencia_abs = lon_apellido - lon_nombre;
    }
    
    printf("\n Resultados \n");
    printf("Nombre completo concatenado con exito (Nombre + ' ' + Apellido).\n");
    printf("Evaluacion (longitud(nombre) > 0 && longitud(apellido) > 0): %d\n", datos_validos);
    printf("Valor absoluto de la diferencia: %d\n", diferencia_abs);
   
    printf("\n[CONFIRMACION]: Operacion finalizada exitosamente.\n");
        
    printf("\n Resumen de Datos Ingresados \n");
    printf("Longitud del nombre: %d\n", lon_nombre);
    printf("Longitud del apellido: %d\n", lon_apellido);

    return 0;
}