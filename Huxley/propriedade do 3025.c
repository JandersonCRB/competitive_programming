#include <stdio.h>

main()
{
    int n=1001,valor;
    while (n>=1000&&n<=9999)
    {
        scanf ("%d",&n);
        if (n<1000||n>9999)
        {
            return 0;
        }
        valor=((n/100)+(n%100))*((n/100)+(n%100));
        if (valor==n)
        {
            printf("propriedade do 3025!\n");
        }
        else
        {
            printf ("numero comum\n");
        }
    }
}
