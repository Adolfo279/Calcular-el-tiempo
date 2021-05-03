#include <stdio.h>
int main()
{
  float distancia, velocidad, division;
  printf("\n\n Calcular el tiempo en que llegara un automovil a su destino");
  printf("\n\n ¿A que velocidad va el automovil?");
  scanf("%f",&velocidad);
  printf("\n\n ¿cual es la distancia que va a recorrer? ");
  scanf("%f",&distancia);
  division = velocidad/distancia;
  printf("\n El tiempo es %f", division);

   return 0;
}