#include <stdio.h>

int main()

{
  

 int contador = 1;

 int nota = 0;

 int aux = 0;


 while (contador < 4)

 {
    
    printf("Digite a nota do %d� Aluno: ", contador);
 
    scanf("%d", &nota);

    aux += nota;

    contador = ++contador;

  } 
  
 int media = aux / 3;

 char resultado[15];

 strcpy(resultado, media >= 7 ? "Aprovado" : "Reprovado");

 printf(resultado);
  
 printf("\nSua m�dia foi %d", media);



}