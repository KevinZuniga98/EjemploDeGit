#include <stdio.h>
#include <stdlib.h>

int main()
{
   int dinero;
   char tipo ;
   int vueltas;
   int dineroMaximo;
   float promedio;
   int acumulador = 0;
   int flag = 0;
   int contadorP = 0;
   int promedioP;

   for ( vueltas = 1 ; vueltas <= 5 ; vueltas ++)
    {

        printf("Ingrese el dinero");
        scanf("%d",&dinero);

        printf("ingrese el tipo ");
        fflush(stdin);
        scanf("%c",&tipo);

         while (!(tipo == 'p' ||tipo == 'd' ||tipo == 'b' ||tipo == 'l' ||tipo == 'z'))
            {
            printf("Vuelva a ingresar el tipo ");
        fflush(stdin);
        scanf("%c",&tipo);
        }

        if ( tipo == 'd' && flag == 0)
        {
        dineroMaximo = dinero;
        flag ++;


        }

          if ( tipo == 'd' && dinero >dineroMaximo)
        {
            dineroMaximo = dinero;
        }



       if ( tipo == 'p')
            {
                acumulador += dinero;
                contadorP ++;
            }

    }
     promedio = acumulador / (float)contadorP;
     promedioP =  (contadorP *  100 ) / 5 ;


    printf("El mayor importe en dolares es %d:" ,dineroMaximo);
    printf ( "El promedio es %f: ",promedio);
    printf ("Porcentaje de pesos %d :",promedioP);


    return 0;
}
