#include <stdio.h>

  int main()
 {
     float nota;
      int frequencia;

     printf("Digite a nota do Aluno:");
      scanf("%f", &nota);

     printf( "Digite a Frequencia (em%%):");
      scanf("%d", &frequencia);
    
     if (nota >= 7 && frequencia >= 75)
      printf("Aprovado \n");
     else
      printf("Reprovado \n");


    return 0;
 }