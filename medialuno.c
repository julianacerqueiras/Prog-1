#include <stdio.h>

int main()


{
    float av1=0, av2=0, media=0;
    
    printf ("Nota da av1");
    
    scanf ("%f", &av1); 
    
    printf ("Nota da av2");
    
    scanf ("%f", &av2);
    
    media = (av1+av2)/2;
    
    if (media >=6)
    {
    printf ("Aprovado");
    }
    
    else 
     
     printf ("Reprovado");
     
     return 0;
     
}