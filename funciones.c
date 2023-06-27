#include <stdio.h>
#include "funciones.h"
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define cant 5
#define max 50

int Menu()
{
    int opcion;
    printf("---------------Bienvenido---------------\n");
    printf("Menu de la herramienta de inventario\n", 163);
    printf("Seleccione una opcion: \n", 162);
    printf("\t1) Ver productos\n");
    printf("\t2) Ingreso de producto\n");
    printf("\t3) Ver productos Ingresados:\n");
     printf("\t4) Eliminar Productos\n");
    printf("\t5) Salir\n");
    printf("Selecione una opcion: ");
    scanf("%d", &opcion);
    return opcion;
}

void mostrarProd(int *id2,  char nombres[][max], char descripciones[][max], char marcas[][max], int *cantidades, float *precios)
{
    printf("---------------------------------------------------------------\n");
    printf("Productos en Inventario:\n");

    for (int i = 0; i < 7; i++)
        {
        printf("Producto %d:\n", i + 1);
        printf("ID: %d\n", id2[i]);
        printf("Nombre de Cancion: %s\n", nombres[i]);
        printf("Genero: %s\n", descripciones[i]);
        printf("Album: %s\n", marcas[i]);
        printf("Integrantes: %d\n", cantidades[i]);
        printf("Precio Tickets: %.2f\n", precios[i]);
        
        printf("\n");
        }
    
}

void ingresarProd(int *id2, char nombreProd[][max], char descripProd[][max], char marcaProd[][max], int *cantidadProd, float *precioProd)
{

    printf("Ingresar datos para cada producto:\n");

    for (int i = 0; i < 2; i++)
    {
        printf("Producto %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &id2[i]);

        printf("Nombre del producto: ");
        scanf("%s", nombreProd[i]);

        printf("Descripción: ");
        scanf("%s", descripProd[i]);

        printf("Marca: ");
        scanf("%s", marcaProd[i]);

        printf("Canridad: ");
        scanf("%d", &cantidadProd[i]);

        printf("Precio del producto: ");
        scanf("%f", &precioProd[i]);

        printf("\n");
    }
}

void mostrarProd2( int *id2,  char nombres[][max],  char descripciones[][max], char marcas[][max],  int *cantidades,  float *precios)
{
    printf("***************************************************************\n");
    printf("Productos ingresados:\n");

    for (int i = 0; i < 8; i++)
    {
        printf("Producto %d:\n", i + 1);
        printf("ID: %d\n", id2[i]);
        printf("Nombre del producto: %s\n", nombres[i]);
        printf("Descripción: %s\n", descripciones[i]);
        printf("Marca: %s\n", marcas[i]);
        printf("Canridad: %d\n", cantidades[i]);
        printf("Precio del producto: %.2f\n", precios[i]);
        printf("\n");
    }
    
}
