#include <stdio.h>
#include "headers/menus.h"
#include "headers/modulos.h"

int main(int argc, char *argv[])
{
    // Definición variables
    int opcion1 = 0, continuar1 = 0;
    float numa = 0, numb = 0, numc = 0, numd = 0, nume = 0;

    // Inicio
    printf("*********BIENVENIDO AL SISTEMA DE FACTURACIÓN***********\n");
    // Menu Principal
    do
    {
        opcion1 = menuPrincipal();
        switch (opcion1)
        {
        case 1:
            // Opción a
            do
            {
                switch (menuFacturacion())
                {
                case 'a' /* constant-expression */:
                    numa = leerCantidadProducto("Llantas");
                    break;
                case 'b' /* constant-expression */:
                    numb = leerCantidadProducto("Kit Pastillas de freno");
                    break;
                case 'c' /* constant-expression */:
                    numc = leerCantidadProducto("Kit de embrague");
                    break;
                case 'd' /* constant-expression */:
                    numd = leerCantidadProducto("Faros");
                    break;
                case 'e' /* constant-expression */:
                    nume = leerCantidadProducto("Radiador");
                    break;
                default:
                    printf("la opción elegida no existe \n");
                    break;
                }
                printf("Desea facturar otro producto  1) Si   2) No: ");
                scanf("%d", &continuar1);
            } while (continuar1 == 1);
            break;
        case 2:
            opcion1 = imprimirFactura(numa, numb, numc, numd, nume);
            break;
        case 3:
            printf("Adios");
            opcion1 = 3;
            break;

        default:
            printf("Elija una opción correcta");
            break;
        }
    } while (opcion1 != 3);
    //

    return 0;
}
