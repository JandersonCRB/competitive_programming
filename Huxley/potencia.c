#include <stdio.h>
#include <math.h>

main()
{
    int x,y,result;
    printf ("Insira o valor a ser calculado:\n");
    scanf ("%d",&x);
    printf ("Insira a Potencia:\n");
    scanf ("%d",&y);
    result=pow(x,y);
    printf ("O resultado eh: %d",result);
}
