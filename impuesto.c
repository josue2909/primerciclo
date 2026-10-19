#include <stdio.h>

void main () {
    float IVA = 0.15; 
    int nom_prod = 0; 
    float precio = 2.0; 
    float total = 0.0; 
    float subtotal = 0.0; 
    /*printf("porfavor ingresa la cantidad de productos: ");
    scanf("%d", &nom_prod);*/
      
    printf("porfavor ingresa la cantidad de productos: ");
    scanf("%d", &nom_prod);

    printf("porfavor ingrese el precio: ");
    scanf("%f", &precio);

    subtotal = precio * nom_prod;
    total = subtotal + (subtotal * IVA);

    printf("El valor a pagar es: %.2f\n", total);

}