#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>



int main()
{
 setlocale(LC_ALL, "PORTUGUESE");

	int i;
	float  temp[30], temp_med, temp_abaixo=0;
	
	system("color 01");
		
	printf("Escreva temperaturas entre 8 & 29 graus\n\n");
		
	for(i=0;i<30;i++)
	{
		
		printf("Informe a temperatura m�dia do dia %i: ",i+1);
		scanf("%f",&temp[i]);
		temp_med += temp[i];
		
	}
	
		system("color 01");

	printf("\n Resultado \n");
	printf("Temperatura m�dia � de: \n");
		for(i=0;i<30;i++)
	{
		printf("\n dia %i %.2f �C",i + 1, temp[i]);
		if(temp[i]<temp_med/30)
		{
			temp_abaixo++;
		}
		
	}
	
	printf("\n b) A temperatura m�dia do m�s de setembro; %.2f�C ",temp_med/30 );
	
	printf("\n c) O n�mero de dias nos quais a temperatura foi inferior � temperatura m�dia. %f", temp_abaixo);
}
