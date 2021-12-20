#include <stdio.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*1)	Considerando que para um consórcio, sabe-se o número total 
de prestações, a quantidade de prestações paga e o valor atual 
da prestação. Crie uma função que faça o cálculo e retorne ao consorciado o saldo devedor. */





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
	

	
	
	
	//Crie uma função que faça o cálculo e retorne ao consorciado o saldo devedor
	
	printf("\no total de segundos é de:", segundos);
}


