#include <stdio.h>

int main(void) {
  // saque = a*100 + b*50 + c*20 + d*10 + e*5 + f*2 + g*1
  
  int saque, resto, a, b, c, d, e, f, g;

  printf("Qual valor do seu saque?\n");
  scanf("%i", &saque);

  a = saque/100;
  resto = saque%100;
  
  b = resto/50;
  resto = resto%50;
  
  c = resto/20;
  resto = resto%20;
  
  d = resto/10;
  resto = resto%10;
  
  e = resto/5;
  resto = resto%5;

  f = resto/2;
  resto = resto%2;

  g = resto/1;
  
  printf ("Suas notas serao:\n%i de R$100\n%i de R$50\n%i de R$20\n%i de R$10\n%i de R$5\n%i de R$2\n%i de R$1", a, b, c, d, e, f, g);

  return 0;
}