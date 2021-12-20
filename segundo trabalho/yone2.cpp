
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main()
{

	float sal, aliquota;
		
	printf("Informe o salario");
	scanf("%.f", sal);
	

	if(sal <=  1100)
	 
	 
		aliquota = sal * 0.075;
	
	
	
	
	
	else if(sal <= 2203.48)
	
					
		aliquota = sal * 0.09;	
			
	
	
	else if(sal <= 3305.22)
	
		 aliquota = sal * 0.12;
	
	
	else if(sal <= 6433.57)
	
		aliquota = sal * 0.14;
	
	
	
	else
	
		aliquota = sal * 0.14;
	
	
	printf(" O seu INSS é de: %2.f", aliquota);
	
}
