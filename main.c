#include <stdio.h>
#include "funciones.h"
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define cant 5
#define max 50

int main (int argc, char *argv[]) {
    int opcion, continuar; // variables para menu

    int productoTotal = 5; //variables de inventario

    int id1[cant]={1, 2, 3, 4, 5};
    char nombrej [cant][max] = {{"carro de juguete"}, {"bicicleta "}, {"balon de fútbol!"}, {"peluche gato"},     {"castillo armable"}};
    char descrip[cant][max] = {{"carro rojo de plástico"}, {"talla M 17-18"}, {"balón qatar final"}, {"peluche con forma de gato color gris"}, {"castillo de bloques para armar"}};
    char marca[cant][max] = {{"Hasbro "}, {"ghost "}, {"adidas"}, {"bimar "}, {"lego "}};
    int cantidad[cant] = {32, 18, 54, 35, 21};
    float precio[cant] = {15, 112 , 23, 18 , 61};

    //varibles para agregados
    int id2[cant]; 
    char nombreProd[cant][max];
    char descripProd[cant][max];
    char marcaProd[cant][max];
    int cantidadProd [cant];
    float precioProd [cant];

    while (continuar)
    {
        system("cls");
        opcion  = Menu();
        switch (opcion)
        {
        case 1:
            system("cls");
            mostrarProd(id1,nombrej,descrip,marca,cantidad,precio);
            break;
        case 2:
            system("cls");
            ingresarProd(id2,nombreProd,descripProd,marcaProd,cantidadProd,precioProd);
            break;
        case 3:
            system("cls");
            mostrarProd2(id2,nombreProd,descripProd,marcaProd,cantidadProd,precioProd);
        default:
            break;
        }
    }
   
    return 0;
}