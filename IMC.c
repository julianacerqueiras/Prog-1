#include <stdio.h>

int main ()

{
    
    float PESO, ALTURA, VALOR=0;
    
    printf ("Informe o Peso:");
    scanf ("%f", &PESO);
    
    printf("Informe a Altura:");
    scanf ("%f", &ALTURA);
    
        VALOR = PESO / (ALTURA*ALTURA);
        
    if(VALOR==19)
        {
    
        printf("Magro!");
        }
    else if((VALOR>=20) && (VALOR<=25))
        {
        
        printf("Peso Ideal!");
        }
    else if ((VALOR>=26) && (VALOR<=30))
        {
            printf("Acima do Peso");
        }
    else if(VALOR>=31)
           {
        
            printf("Obeso,\n Situação prejudicial a saúde!");
            }
            
    return 0;
    
        
}