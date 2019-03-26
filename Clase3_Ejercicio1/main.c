#include <stdio.h>
#include <stdlib.h>

float ingresoNumero();
float calculoAreaCirculo(float);


int main()
{
    float radioIngresado;
    float areaTotal;

    radioIngresado = ingresoNumero();
    areaTotal = calculoAreaCirculo(radioIngresado);
    printf("El area del circulo es: %f",areaTotal);

    return 0;
}


float ingresoNumero()
{
    float numeroIngresado;
    printf("Ingrese un numero");
    scanf("%f",&numeroIngresado);
    return numeroIngresado;
}

float calculoAreaCirculo(float radio)
{
   float calculo;
   calculo = 3.14 * radio * radio;
   return calculo;
}
