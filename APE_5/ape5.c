#include <stdio.h>

int main() {
    float C1, C2, NL, C3;
    float NF_APROBACION = 60.0;
    float POND_NC = 0.7;
    float POND_NL = 0.3;
    int NUM_CERTAMENES = 3;

    printf("Ingrese la nota del primer certamen (C1): ");
    scanf("%f", &C1);

    printf("Ingrese la nota del segundo certamen (C2): ");
    scanf("%f", &C2);

    printf("Ingrese la nota de laboratorio (NL): ");
    scanf("%f", &NL);

    C3 = (((NF_APROBACION - (NL * POND_NL)) / POND_NC) * NUM_CERTAMENES) - C1 - C2;

    if (C3 < 0) {
        printf("¡Felicidades! Si el resultado es negativo o menor a 0, significa que ya apruebas la asignatura con las notas actuales.\n");
    } else {
        printf("La nota mínima necesaria en el tercer certamen (C3) es: %.2f\n", C3);
    }

    return 0;
}