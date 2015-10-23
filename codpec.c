#include <stdio.h>

int main()

{
    int cod_pec, quant_pec;
    float val_pec, total=0;
    
    printf ("Informe o código da peça");
    scanf ("%d", &cod_pec);
    
    printf("Informe o valor da peça");
    scanf ("%f", &val_pec);
    
    printf ("Informe a quantidade de peça");
    scanf ("%d", &quant_pec);
    
    total = val_pec * quant_pec;
    
    printf(" o código é: %d", cod_pec );
    printf(" o valor total é: %f", total );
    
    return 0;
    
}
