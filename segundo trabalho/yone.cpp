#include <stdio.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*1)	Considerando que para um cons�rcio, sabe-se o n�mero total 
de presta��es, a quantidade de presta��es paga e o valor atual 
da presta��o. Crie uma fun��o que fa�a o c�lculo e retorne ao consorciado o saldo devedor. */





int mili(int horas, int minutos)
{
 int segundos;
  
  	segundos = ((horas * 60) * 60 ) + (minutos * 60);
	
	return segundos;
}
int main()
 {
	setlocale(LC_ALL, "PORTUGUESE");
	int horas = 1, minutos = 60 ;
	int segundos = 0;
	
	segundos = mili(horas, minutos);
	

	
	
	
	//Crie uma fun��o que fa�a o c�lculo e retorne ao consorciado o saldo devedor
	
	printf("\no total de segundos � de:", segundos);
}


