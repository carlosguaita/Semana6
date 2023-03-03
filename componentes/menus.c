#include <stdio.h>
#include "../headers/menus.h"

int menuPrincipal()
{
    int opcion1;
    printf("1) Facturar Producto\n");
    printf("2) Imprimir Factura\n");
    printf("3) Salir\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opcion1);
    return opcion1;
}

char menuFacturacion()
{
    char opcion2;
    printf("Escoja los productos que desea facturar:\n");
    printf("a) Llantas (Precio: $150) (Precio al por mayor, desde 6 unidades: $130)\n");
    printf("b) Kit Pastillas de freno (Precio: $55) (Precio al por mayor, desde12 unidades: $45)\n");
    printf("c) Kit de embrague (Precio: $180) (Precio al por mayor, desde 8 unidades: $165)\n");
    printf("d) Faros (Precio: $70) (Precio al por mayor, desde 10 unidades: $60)\n");
    printf("e) Radiador (Precio: $120)(Precio al por mayor, desde 6 unidades: $105)\n");
    fflush(stdin);
    scanf("%c", &opcion2);
    return opcion2;
}