#include <stdio.h>

int main(void) {
 int faltas;
 char aluno[60];
 float nota1, nota2, nota3, media;

 printf ("Qual o nome do aluno?\n");
 scanf("%s", aluno);

 printf ("Qual a nota 1 do aluno?\n");
 scanf ("%f", &nota1);

 printf ("Qual a nota 2 do aluno?\n");
 scanf ("%f", &nota2);

 printf ("Qual a nota 3 do aluno?\n");
 scanf ("%f", &nota3);

media = (nota1 + nota2 + nota3)/3;

 printf ("Qual o numero de faltas desse aluno?\n");
 scanf ("%i", &faltas);

 if (media>=5 && faltas<=7){
   printf ("A media do aluno foi %2.f e a sua quantidade de faltas foi %i\nALUNO APROVADO", media, faltas);
 }
 else if (media>=5 && faltas>7){
   printf ("A media do aluno foi %2.f e a sua quantidade de faltas foi %i\nALUNO REPROVADO POR FALTA", media, faltas);
 }
  else {
    printf ("A media do aluno foi %2.f\nALUNO REPROVADO POR MEDIA", media);
  }
  return 0;
}