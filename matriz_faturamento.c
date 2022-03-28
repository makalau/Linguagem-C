/*Matriz na linguagem C simbolizando o pseudo-faturamento de uma empresa de marketing nos 3 primeiros meses*/

/* Abaixo está a linguagem pré-processador e suas instruções chamadas de "diretivas" >>  #include */
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

float faturamento[3][4];
char meses[13][13] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

void entrada_faturamento()
{
  for (int indice1=0; indice1 < 3; indice1++)
  {
    printf("-------------------------------------------------------\n");
    for (int indice2=0; indice2 < 4; indice2++)
    {
      printf("Digite o faturamento da %dª semana no mês de %s: ", indice2+1, meses[indice1]);
      scanf("%f", &faturamento[indice1][indice2]);
    }
  }
}


int main(void){
	int continua;
	//Caracteres gráficos em formato ASCII e comando system("cls") somente é interpretado pelos sistemas Windows
	printf("\n\n");
	printf("\tBem vindo ao programa!\n\n");
	system("pause");
	system("cls");
	printf("\n\n");
	printf("\n\t\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB");
	printf("\n\t\t\xBA\t\t\t \xBA \n\t\t\xBA BEM VINDO AO PROGRAMA! \xBA");
	printf("\n\t\t\xBA\t\t\t \xBA");
	printf("\n\t\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC");
	printf("\n\n");
	setlocale(LC_ALL, "Portuguese");
	entrada_faturamento();
	printf("Bem vindo ao programa de controle dos seus indicadores financeiros.");
	for (int i_a = 0; i_a < 3; i_a++)
		{
	
	      printf("\n");
	      printf("\n*-------- Faturamento no mês de %s: --------*", meses[i_a]);
	
	    for (int i_b = 0; i_b < 4; i_b++)
	      {
	        printf("\n    %dª Semana lucro de: R$ %2.f,00", i_b+1,faturamento[i_a][i_b]);
	      }
	      
	    }
	printf("\n\n");
	printf("Deseja continuar? [1]SIM/[2]NAO: ");
	scanf("%d", &continua);
	if (continua == 1){
		system("clear");
		main();
	}
	system("clear");
	printf("Programa encerrado com Sucesso!");
	printf("\n\tVolte sempre! :)");
	printf("\n\n");
	system("PAUSE");
	
	return 0;
}