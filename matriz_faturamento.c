/*Matriz na linguagem C simbolizando o pseudo-faturamento de uma empresa de marketing nos 3 primeiros meses*/

#include <stdio.h>
#include <locale.h>

int main(void){
  setlocale(LC_ALL, "Portuguese");
  float faturamento[3][4] = {
    {150000, 98000, 120000,75000},
    {120000, 100000, 70000, 66000},
    {75000, 180000, 95000, 120000}
  };
  printf("Bem vindo ao programa de controle dos seus indicadores financeiros.");
  for (int i_a = 0; i_a < 3; i_a++)
    {

      printf("\n");
      printf("\n*-------- Faturamento no %dº mês: --------*", i_a+1);

    for (int i_b = 0; i_b < 4; i_b++)
      {
        printf("\n    %dª Semana lucro de: R$ %2.f,00", i_b+1,faturamento[i_a][i_b]);
      }
    }
	return 0;
}