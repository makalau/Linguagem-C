#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(void){
  bool continua;
  int cont;
  
  do {
      int num;
      int num2;
      int aux=1;
      int maior, menor;
    printf("Digite o %dº número: ", aux);
    scanf("%d", &num);
    ++aux;
    printf("Digite o %d número: ", aux);
    scanf("%d", &num2);
    if (num != num2)
      {
        if (num > num2)
          {
            maior = num;
            menor = num2;
          }
        else if (num2 > num)
          {
            maior = num2;
            menor = num;
          }
        printf("\nO maior número digitado foi %d: ", maior);
        printf("\nO menor número digitado foi %d: ", menor);
      }
      
    else
      printf("Os números %d, %d são de valores idênticos.", num, num2);
    printf("\n-----------------------------------\n");
    printf("Deseja continuar [1]SIM/[2]NÃO: ");
    printf("\n-----------------------------------\n");
    scanf("%d", &cont);
    continua = (cont == 1) ? true: false;
    
  } while (continua);
  printf("Programa finalizado com sucesso!\nVolte Sempre!");
}