#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

struct cond
{
	char yone[50];
	int numero, numero_de_moradores; 
	float area, valor_pago;
};
int main() {
	int i, n, total_de_moradores=0;
	printf("\n quantos apartamentos existes no condominio ");
	scanf("%i", &n);
	struct cond ap[n];
	

	
	setlocale(LC_ALL, "PORTUGUESE");
	for(i=0; i<n; i++)
	{
		
		printf("\n informe os dados do %i apartamento  ", i+1);
		
		printf("\n qual o  do responsavel do ap: ");
		fflush(stdin);
		gets(ap[i].yone);
		
		printf("\n Informe o número do apartamento: ");
		fflush(stdin);
		scanf("%i", &ap[i].numero);
		
		printf("\nInforme o tamanho do apartamento(em m2): ");
		fflush(stdin);
		scanf("%f", &ap[i].area);
		
		printf("\n\nNumero de moradores do apartamento: ");
		fflush(stdin);
		scanf("%d", &ap[i].numero_de_moradores);
		
		total_de_moradores += ap[i].numero_de_moradores;
		
		printf("\n\nInforme a prestação do apartamento: ");
		fflush(stdin);
		scanf("%f", &ap[i].valor_pago);
	
			
	}
	
	
	system("color 05");
	
	
	
	for(i=0; i<n;i++)
	{
		printf("\n %i apartamento  \n", i+1);
		printf("\n O  do dono  é: %s", ap[i].yone);
		printf("\n O numero do apartamento é: %i", ap[i].numero);
		printf("\n O tamanho do apartamento é(em m2): %.2f", ap[i].area);
		printf("\n Numero de moradores do apartamento: %i", ap[i].numero_de_moradores);
		printf("\n Valor pago por mês: %.2f", ap[i].valor_pago);
	}
	
	printf("\n O numero de moradores é de: %i \n",total_de_moradores);

}
