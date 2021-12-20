#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>



int main()
{
   system("color 0D");

 int i, j, ano, outubro,  
    venda[4] [12]=  {{1200,	1250,	1300,	1300,	1310,	1280,	1290,	1310,	1340,	1345,	1300,	1280},
					 {3100,	3150,	3150,	3200,	3230,	3240,	3200,	3399,	3340,	3345,	3280,	3250},
 					 {2500,	2640,	2630,	2700,	2710,	2690,	2670,	2690,	2700,	2710,	2650,	2590},
 				  	 {3000,	2980,	2995,	3004,	3000,	3100,	3150,	3200,	3250,	3230,	3140,	2999}};
 
 for(i=0;i<4;i++)
 {
 	for(j=0;j<12;j++)
 	{
 		ano += venda[i][j];
 		
 		if(j==10)
 		{
 			outubro += venda[i][j];
		 };
 	
	 }
 }

 
 printf("\n Resultado\n");
 printf("\n a) A quantidade de peças  total  vendidas no período de um ano. %i\n  ",ano );
 printf("\n b) O total de venda da empresa no mês de outubro. %i  ",outubro );
}
