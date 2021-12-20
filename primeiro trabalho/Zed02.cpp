#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>







int main() {
int i, mes[30], dia, venda ;
system("color 07");

for(i=0; i <30; i++) {
	
 printf("\n Quantas vendas ocorreram no dia  %i: ", i+1);
 scanf("%i", &mes[i]);	
 if(mes[i]>venda) {
 	venda = mes[i];
 	
 	dia = i+1;
 }
}
 if(mes[i]>venda) {
 	venda = mes[i];
 	
 	dia = i+1;
 }
system("color 07");

	printf("\n Resultado \n");
	

		printf("\n o Dia que teve mais vendas foi %i", dia);
		printf("\n a quantidade de vendas foi de:. %i", venda);
		
	

}
