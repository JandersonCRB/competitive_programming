#include <stdio.h>

main()
{
	int a,b,c,d,aux;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a<2||b<2||c<2||d<2)
    {
        printf("SEM PRODUTO");
        return 0;
    }
	aux=a;
	while (aux>2)
	{
		aux--;
		if (a%aux==0)
			{
				printf ("SEM PRODUTO");
				return 0;
			}
	}
	aux=b;
	while (aux>2)
	{
		aux--;
		if (b%aux==0)
			{
				printf ("SEM PRODUTO");
				return 0;
			}
	}
	aux=c;
	while (aux>2)
	{
		aux--;
		if (c%aux==0)
			{
				printf ("SEM PRODUTO");
				return 0;
			}
	}
	aux=d;
	while (aux>2)
	{
		aux--;
		if (d%aux==0)
			{
				printf ("SEM PRODUTO");
				return 0;
			}
	}
	printf ("%d",a*b*c*d);
}
