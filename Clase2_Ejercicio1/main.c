#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maximo;
    int minimo;
    int contador;
    int numeroIngresado;
    int suma = 0;
    float promedio;


    for(contador=0; contador<5;contador++)
    {
        printf("Ingrese un numero");
        scanf("%d",&numeroIngresado);
        suma = suma + numeroIngresado;

        if(contador==0)
        {
            maximo = numeroIngresado;
            minimo = numeroIngresado;

        }

        if(numeroIngresado>maximo)
        {
            maximo = numeroIngresado;
        }
        if(numeroIngresado<minimo)
        {
            minimo = numeroIngresado;
        }

    }

    promedio = (float)suma/5;

    printf("El numero maximo es: %d\nEl numero minimo es: %d\nEl promedio es: %f", maximo, minimo, promedio);




    return 0;
















  //int numeroIngresado;
  //int suma = 0;
  //int contador = 0;
  //float promedio;
  //int numMax = 0;
  //int numMin = 0;
  //system("clear");

  //do
  //{
    //  printf("Ingrese un numero");
     // scanf("%d",&numeroIngresado);
      //contador++;
     // suma = suma + numeroIngresado;
     // promedio = (float)suma/5;

     // if(contador==0)
     // {
       //   numMax = numeroIngresado;
       //   numMin = numeroIngresado;
     // }
      //if(contador!=0)
        //{
          //  if(numeroIngresado>numMax)
           // {
             //   numMax = numeroIngresado;
            //}
            //if(numeroIngresado<numMin)
            //{
              //  numMin = numeroIngresado;
            //}
        //}

  //}while(contador<5);

//  printf("El promedio es: %f \nEl numero maximo es: %d\nEl numero minimo es: %d",promedio,numMax,numMin);



}
