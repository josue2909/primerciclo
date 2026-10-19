#include    <stdio.h>
int main() {
    //1. Definir variables
    int cant_doc, cant_img, cant_vid, cant_prog;
    float tam_doc, tam_img, tam_vid, tam_prog;
    float cap_disco;
    float espacio_doc, espacio_img, espacio_vid, espacio_prog;  
    float espacio_total_MB, espacio_total_GB, porcentaje;
    
    //2. Solicitar al usuario la cantidad de archivos y su tamaño
    printf("Ingrese la cantidad de documentos: ");
    scanf("%d", &cant_doc);
    
    printf("Ingrese la cantidad de imágenes: ");
    scanf("%d", &cant_img);

    printf("Ingrese la cantidad de videos: ");
    scanf("%d", &cant_vid);

    printf("Ingrese la cantidad de programas: ");
    scanf("%d", &cant_prog);

    printf("Ingrese el tamaño promedio de los documentos (en MB): ");
    scanf("%f", &tam_doc);

    printf("Ingrese el tamaño promedio de las imágenes (en MB): ");
    scanf("%f", &tam_img);

    printf("Ingrese el tamaño promedio de los videos (en MB): ");
    scanf("%f", &tam_vid);

    printf("Ingrese el tamaño promedio de los programas (en MB): ");
    scanf("%f", &tam_prog);

    //3. Capacidad del disco en GB
    printf("Ingrese la capacidad del disco (en GB): ");
    scanf("%f", &cap_disco);

    //4. Calculos mamtematicos
    espacio_doc = cant_doc * tam_doc;  
    espacio_img = cant_img * tam_img;
    espacio_vid = cant_vid * tam_vid;
    espacio_prog = cant_prog * tam_prog;

    espacio_total_MB = espacio_doc + espacio_img + espacio_vid + espacio_prog;
    espacio_total_GB = espacio_total_MB / 1024.0;
    porcentaje = (espacio_total_GB / cap_disco) * 100.0;

    printf("El espacio de documentos es: %.2f MB\n", espacio_doc);

    printf("El espacio de imágenes es: %.2f MB\n", espacio_img);

    printf("El espacio de videos es: %.2f MB\n", espacio_vid);

    printf("El espacio de programas es: %.2f MB\n", espacio_prog);

    printf("El espacio total ocupado es: %.2f MB\n", espacio_total_MB);

    printf("El espacio total ocupado es: %.2f GB\n", espacio_total_GB);

    printf("El porcentaje de espacio ocupado en el disco es: %.2f%%\n", porcentaje);
    
    return 0;

}