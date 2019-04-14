#include <stdio.h>
#include <math.h>

main()
{
    float n[10000],desv[10000], dp;
    float media = 0;
    int i,contador;
    int acima_da_media=0;
    for (i = 1;n[i-1] != -1; i++)
    {
        scanf ("%f",&n[i]);
    }
    contador = i - 2;
    for (i = 1;i <= contador;i++)
    {
        media += n[i];
    }
    media /= contador;
    for (i = 1;i <= contador;i++)
    {
        desv[i] = n[i]-media;
        desv[i] = pow(desv[i],2);
        dp += desv[i];
    }
    dp = dp/(contador-1);
    dp = sqrt(dp);
    for (i = 1;i <= contador;i++)
    {
        if (n[i] > media)
        {
            acima_da_media++;
        }
    }
    printf ("%.2f\n%.2f\n%d",media,dp,acima_da_media);
}
