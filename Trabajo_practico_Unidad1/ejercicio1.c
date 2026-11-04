#include <stdio.h>

int main() {

    int d1, d2, d3, d4, d5, d6, d7, d8;
    int longitud_dni, modulo, suma, indice;
    int letra_ingresada;
    int letra_calculada = 0; 
    int dni_valido;          
        
    longitud_dni = 9;
    modulo = 23;
    suma = 0;
    
    printf("Ingrese el primer digito del DNI: ");
    scanf("%d", &d1);
    printf("Ingrese el segundo digito del DNI: ");
    scanf("%d", &d2);
    printf("Ingrese el tercer digito del DNI: ");
    scanf("%d", &d3);
    printf("Ingrese el cuarto digito del DNI: ");
    scanf("%d", &d4);
    printf("Ingrese el quinto digito del DNI: ");
    scanf("%d", &d5);
    printf("Ingrese el sexto digito del DNI: ");
    scanf("%d", &d6);
    printf("Ingrese el septimo digito del DNI: ");
    scanf("%d", &d7);
    printf("Ingrese el octavo digito del DNI: ");
    scanf("%d", &d8);
        
    printf("Ingrese el valor numerico de la letra del DNI: ");
    scanf("%d", &letra_ingresada);    

    suma = d1 + d2 + d3 + d4 + d5 + d6 + d7 + d8;
    indice = suma % modulo;    
    
    dni_valido = (letra_calculada == letra_ingresada);
        
    if (dni_valido == 1) {
        printf("El DNI ingresado es VALIDO.\n");
    } else {
        printf("El DNI ingresado es NO VALIDO.\n");
    }
    
    printf("\nInformacion del Algoritmo\n");
    printf("Datos de entrada: Los 8 digitos y el valor numerico de la letra\n");
    printf("Informacion de salida: Variable dni_valido y mensaje en pantalla\n");
    printf("El valor minimo de las variables utilizadas es 0\n");
    
    return 0;
    
}