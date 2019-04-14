#include <stdio.h>
#include <stdbool.h>

int fatorial(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return n * fatorial(n - 1);
    }
}

main()
{
    int n, i;
    bool alterna = true;
    double denominador = 1;
    double resultado= 0;
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        if (alterna)
        {
            resultado += (double) fatorial(i) / denominador;
            alterna = false;
        }
        else
        {
            resultado -= (double) fatorial(i) / denominador;
            alterna = true;
        }
        denominador = (denominador * 2) + 1;
    }
    printf("%.2lf",resultado);
}
