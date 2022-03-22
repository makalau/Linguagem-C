#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

bool par(num){
  if (num % 2 == 0 )
  {
    return true;
  }
  else
  {
    return false;
    }
  }

bool continua(){
  int cont;
  printf("\n-----------------------------------\n");
  printf("Deseja continuar [1]SIM/[2]NÃO: ");
  printf("\n-----------------------------------\n");
  scanf("%d", &cont);
  switch(cont)
    {
      case 1:
       return true;
        break;

      case 2:
      return false;
        break;
    }
  
}
int main()
  {
    setlocale("LC_ALL", "Portuguese");
    int num;
    bool retorno;
    bool cont = true;
    while (cont)
      {
        printf("Digite um número: ");
        scanf("%d", &num);
        retorno = par(num);
        if (retorno)
          {
            printf("Este número é PAR");
          }
        else {
            printf("Este número é Ímpar");
          }
        cont = continua();
      }
  printf("Programa finalizado com êxito");
  return 0;
}