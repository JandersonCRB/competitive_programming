#include <stdio.h>

main()
{
    int n[15];
    int pares[5];
    int impares[5];
    int i = 0;
    int j = 0;
    int i2 = 0;
    int j2 = 0;
    int contador;
    for (contador = 0;contador < 15;contador++)
    {
        scanf("%d",&n[contador]);
    }
    for (contador = 0;contador < 15;contador++)
    {
        if (n[contador]%2 == 0)
        {
            if (i < 4)
            {
                pares[i] = n[contador];
                i++;
            }
            else
            {
                pares[i] = n[contador];
                for (i=0;i < 5;i++)
                {
                    printf ("par[%d] = %d\n",i,pares[i]);
                }
                i = 0;
            }

        }
        else
        {
            if (j < 4)
            {
                impares[j] = n[contador];
                j++;
            }
            else
            {
                impares[j] = n[contador];
                for (j = 0;j < 5;j++)
                {
                    printf ("impar[%d] = %d\n",j,impares[j]);
                }
                j = 0;
            }
        }
    }
    for (j2 = 0;j2 < j;j2++)
        {
            printf ("impar[%d] = %d\n",j2,impares[j2]);
        }
    for (i2 = 0;i2 < i;i2++)
        {
            printf ("par[%d] = %d\n",i2,pares[i2]);
        }
}
