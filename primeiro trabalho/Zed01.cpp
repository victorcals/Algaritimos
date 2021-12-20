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
		
		printf("Informe a temperatura média do dia %i: ",i+1);
		scanf("%f",&temp[i]);
		temp_med += temp[i];
		
	}
	
		system("color 01");

	printf("\n Resultado \n");
	printf("Temperatura média é de: \n");
		for(i=0;i<30;i++)
	{
		printf("\n dia %i %.2f ºC",i + 1, temp[i]);
		if(temp[i]<temp_med/30)
		{
			temp_abaixo++;
		}
		
	}
	
	printf("\n b) A temperatura média do mês de setembro; %.2fºC ",temp_med/30 );
	
	printf("\n c) O número de dias nos quais a temperatura foi inferior à temperatura média. %f", temp_abaixo);
}
