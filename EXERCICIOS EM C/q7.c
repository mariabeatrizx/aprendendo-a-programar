#include <stdio.h>

int main(void) {
 char nome [60];


printf ("Qual é o seu nome?\n");
scanf ("%s",nome);
 for (int i=0; i<10; i++){
 printf ("Olá %s\n", nome);
 }
  return 0;