#include <stdio.h>
 
int main(void) {
 int bolas, sabor;
 
 printf("Qual sabor de sorvete desejado?\n");
 scanf ("%i", &sabor);
 
 printf("Quantas bolas você deseja?\n");
 scanf("%i", &bolas);
 
 if (sabor == 1 && bolas > 3){
   printf ("Você tem direito a um desconto de 10%\n");
 }
 else if (sabor == 1 && bolas <= 3){
 printf("Você tem direito a um desconto de 5%");
 }
 else {
   printf("Sorvete sem desconto");
 }
  return 0;
