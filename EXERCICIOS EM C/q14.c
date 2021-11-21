#include <stdio.h>

int main(void) {

int numero, acumulador=0;

printf ("Digite um número\n");
scanf ("%i", &numero);


 for (int i=0;i<=numero;i++) {
   if (i%2==0){
    acumulador= i + acumulador; 
   } 
 } 
 printf ("A soma dos númerosé: %i", acumulador);

  return 0;
}