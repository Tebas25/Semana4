#include <stdio.h>
#include "modulos.h"

float calculosubtotal (float subtotal){
    float total;
    if (subtotal>500 && subtotal <=1000){
        total=subtotal*0.96;
    }else if(subtotal>1000 && subtotal<=5000){
        total=subtotal*0.93;
    }else if(subtotal>5000){
        total=subtotal*0.91;
    }
    return total;
}

void ImprimirFactura (float num1, float num2, float num3, float num4, float num5,
                        float precio1, float precio2, float precio3, float precio4, float precio5,
                        float subtotal1, float subtotal2, float subtotal3, float subtotal4, float subtotal5,
                        char nombre[], char cedula[]){
    printf("########################################");
    printf("Factura########################################\n");
    printf("Nombre: %s\n", nombre);
    printf("Cedula: %s\n", cedula);
    printf("Producto                Cantidad        Precio Unitario     Precio Total\n");
    if (num1!=0){
        printf("Llantas                   %.0f                %.2f               %.2f\n", num1, precio1,subtotal1);
    }if (num2!=0){
        printf("Kit de pastillas          %.0f                %.2f               %.2f\n", num2, precio2,subtotal2);
    }if (num3!=0){
        printf("Kit de embrague           %.0f                %.2f               %.2f\n", num3, precio3,subtotal3);
    }if (num4!=0){
        printf("Faros                     %.0f                %.2f               %.2f\n", num4, precio4,subtotal4);
    }if (num5!=0){
        printf("Radiadores                %.0f                %.2f               %.2f\n", num5, precio5,subtotal5);
    }
}
