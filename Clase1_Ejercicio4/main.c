#include <stdio.h>
#include <stdlib.h>
//solicitar 10 numeros al usuario
//calcular cuantos positivos y cuantos negativos
//mostrar por pantalla cant negativos y positivos


int main()
{
   int contador = 0;
   int numeroIngresado;
   int cantidadPositivos = 0;
   int cantidadNegativos = 0;

    system("clear");

   do
    {
       printf("Ingrese un número");
        scanf("%d",&numeroIngresado);
        contador++;

        if(numeroIngresado>0)
        {
            cantidadPositivos++;
        }
        else
        {
            cantidadNegativos++;
        }

    }while(contador<10);



    printf("La cantidad de negativos es: %d\nLa cantidad de positivos es: %d ", cantidadNegativos, cantidadPositivos);

}
