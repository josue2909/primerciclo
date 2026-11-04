#include <stdio.h>

int main() {
    int genero, edad;
    int puede_ver;

    printf("Ingrese el genero (1 Accion, 2 Comedia, 3 Drama, 4 Terror): ");
    scanf("%d", &genero);
    
    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    if ((genero == 4 && edad >= 18) || (genero == 1 && edad >= 13) || (genero == 2 || genero == 3)) {
        puede_ver = 1;
    } else {
        puede_ver = 0;
    }

    if (puede_ver == 1) {
        printf("Puedes ver la pelicula\n");
    } else {
        printf("No cumples con la edad requerida\n");
    }

    printf("\n Resumen \n");
    printf("Genero: %d\n", genero);
    printf("Edad: %d\n", edad);
    printf("Puede ver (1/0): %d\n", puede_ver);

    return 0;
}