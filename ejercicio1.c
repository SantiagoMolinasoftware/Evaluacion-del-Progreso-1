#include <stdio.h>

int main()
{
    int numero, suma = 0;
    float pientre4= 0.78539;
    int valorsigmaracional= 0;
    int resultado=0;
    //declaracion de variables


    printf ("Ingresar un numero entero positivo:\n");
    scanf ("%d",&numero);

    //peticion de datos

    if (numero < 0) //ver si el numero ingresado es entero
    {
        printf("El numero ingresado no es entero positivo, vuelve a intentarlo.\n");
    } else {
        for (int i = 1; i <= numero; i++) //sumatoria de gauss
        {
            suma += i;
        }

        resultado = pientre4/valorsigmaracional+suma; //resolucion de la serie

        printf ("El resultado final es: %f.\n", resultado); //resultado final 
    }
    return 0;
}