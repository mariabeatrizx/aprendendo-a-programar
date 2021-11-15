#include <stdio.h>

int main(void) {
  /*1 - Círculo
Entrada: Raio
2 - Retângulo
Entrada: Lados
3 - Quadrado
Entrada: Lado
4 - Triângulo
Entrada: Base e Altura
*/
  
  int figura;
  float raio, lado, base, altura, pi=3.14, area;

  printf("De qual figura voce deseja saber a area?\n");
  scanf("%i", &figura);

  if(figura==1) {
    printf ("Qual o valor do raio?\n");
    scanf ("%f", &raio);
    area = pi * raio *raio;
  }
  else if(figura == 2) {
    printf("Qual valor da base e da altura?\n");
    scanf ("%f %f", &base, &altura);
    area = base * altura;
  }
  else if(figura == 3) {
    printf("Qual valor do lado?\n");
    scanf ("%f", &lado);
    area = lado * lado;
  }
  else if (figura == 4) {
   printf("Qual valor da base e da altura?\n");
    scanf ("%f %f", &base, &altura);
    area = base * altura/2;
  }

  printf ("A area da sua figura eh igual a %.2f", area);
  


;

  return 0;
}