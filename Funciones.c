#include <stdio.h>
#include "modulos/modulos.h"
#include "menu/menu.h"


int main (int argc, char *argv[]) {

    float subtotal1=0, subtotal2=0, subtotal3=0, subtotal4=0, subtotal5=0;
    float precio1=150, precio2=55, precio3=180, precio4=70, precio5=120;
    float num1=0, num2=0, num3=0, num4=0, num5=0;
    float subtotal=0, total=0, descuento=0;
    char opcion, menu;
    int resp;
    char nombre[50], cedula[20];

do{
    menu=MenuPrincipal();

    switch (menu)
    {
    case 'a':
        do{
            opcion=MenuOpciones();

            switch (opcion)
            {
            case 'a':
                printf("Ingrese el numero de llantas que desea facturar\n");
                scanf("%f", &num1);
                break;

            case 'b':
                printf("Ingrese el numero de kit de pastillas de freno\n");
                scanf("%f", &num2);
                break;
            case 'c':
                printf("Ingrese el numero de kit de embrague\n");
                scanf("%f", &num3);
                break;
            case 'd':
                printf("Ingrese el numero de faros\n");
                scanf("%f", &num4);
                break;
            case 'e':
                printf("Ingrese el numero de radiadores\n");
                scanf("%f", &num5);
                break;
            default:
                printf("Opcion no valida\n");
                break;
            }            

            printf("Quieres otro producto: \n");
            printf("Si=1 o No=0\n");
            scanf("%d", &resp);

        }while(resp==1 && menu=='a');
        break;

        case'b':

            subtotal1=num1*precio1;
            subtotal2=num2*precio2;
            subtotal3=num3*precio3;
            subtotal4=num4*precio4;
            subtotal5=num5*precio5;
    
            subtotal=subtotal1+subtotal2+subtotal3+subtotal4+subtotal5;
            subtotal=calculosubtotal(subtotal);
        
        printf("Ingrese el nombre del cliente: \n");
        scanf("%s", &nombre);
        printf("Ingrese la cedula del cliente: \n");
        scanf("%s", &cedula);
        ImprimirFactura(num1,num2,num3,num4,num5,precio1,precio2,precio3,precio4,precio5,subtotal1,subtotal2,subtotal3,subtotal4,subtotal5,cedula,nombre);
                
                printf("El subtotal es: %.2f\n", subtotal);
                        if    (subtotal>500 && subtotal <=1000)
                    {
                        printf("Su porcentaje de descuento fue de 4 porciento, y su descuento fue de: %.2f \n", descuento);
                    }
                        else if(subtotal>1000 && subtotal<=5000)
                    {
                        printf("Su porcentaje de descuento fue de 7 porciento, y su descuento fue de: %.2f \n", descuento);
                    }
                        else if(subtotal>5000)
                    {
                        printf("Su porcentaje de descuento fue de 9 porciento, y su descuento fue de: %.2f \n", descuento);
                    }
                printf("El total es: %.2f\n", total);
                break;
            case 'c':
                printf("Gracias por su compra, adios!");
                break;
            default:
                printf("no valido\n");
                break;
    }    

} while (resp==0 && menu=='a');
    
    return 0;

}
