#include <stdio.h>

int perfeito (int x)
{
    int aux=0,counter=0;
    for (aux=x-1;aux>0;aux--)
    {
        if (x%aux==0)
        {
            counter+=aux;
        }
    }
    if (counter==x)
    {
        printf ("%d\n",x);
    }
}

int main()
{
    int n,counter,checa;
    scanf ("%d",&n);
    for (counter=1;counter<n;counter++)
    {
        perfeito(counter);
    }
}
