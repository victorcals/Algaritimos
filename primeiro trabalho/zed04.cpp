#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main()
{
 	setlocale(LC_ALL, "PORTUGUESE");

	 int rep;
	 
    int idade[5];
    
	int menor_idade= 200, maior_idade=0;
    
     
    int i;
 
    
    
    int co=0, c_b=0, c_rg=0, c_r=0, c_p=0;
    
    float porcen_pessimo=0;  
    float media_ruim=0;
    float dif_br=0;
    float id_media_r=0;

  
  	system("color 0d");

      for (i=1;i<=5;i++)
     {
 
         printf ("Informe a idade:");
         scanf ("%i",&idade[i]);
           printf("Escolha uma opcao:");
           
             printf("1 - Otimo\n");
          
             
               printf("2 - Bom\n");
                  
                   
                 printf("3 -Regular\n");
                   
                     
                   printf("4 - Ruim\n");
                     
                       
                     printf("5 - Pessimo\n");
                         scanf ("%i", &rep);
                         
                  
        
         if (idade[i] < menor_idade)
         {
            menor_idade = idade[i];
        }
             
                         
                         
                                     
       	  if (rep == 1)
         {
		 
         	co++;
		 }
		 
 
 			 if (rep == 2)
         {
         	c_b++;
		 }
		 
 
 	 if (rep== 3)
         {
         		c_rg++;
		 }
		 
 
 	 if (rep == 4)
         {
        	c_r++;
        	id_media_r = idade[i]  / c_r;
         	
		 }
		 
 if (rep == 5)
    {
       c_p++;
       
       
			if (idade[i] > maior_idade)
        	{
			
            maior_idade = idade[i];
        }
        
            porcen_pessimo = c_p / 100;
            
             
		}
 
 
        
        
    

   	
   
}

system("color 0d");

printf("\n a. a quantidade de respostas ótimo %i; \n", co);
printf("\n b. a diferença percentual entre respostas bom e regular: %f \n", dif_br);
printf("\n c. a média de idade das pessoas que responderam ruim; %f \n", id_media_r);
printf("\n d. a porcentagem de respostas péssimo  e a maior idade que utilizou esta opção; %d \n", porcen_pessimo , maior_idade);
 
 
 return 0;

}
 

