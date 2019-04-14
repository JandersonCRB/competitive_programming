#include <stdio.h>

main()
{
    int numero_questoes;
    int a,b,c,d,e;
    int brancos, pretos;
    int i,j;
    scanf ("%d",&numero_questoes);
    while (numero_questoes != 0)
    {
        for(i = 0; i < numero_questoes; i++)
        {
            brancos = 0;
            pretos = 0;
            scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
            if (a <= 127)
            {
            	pretos++;
            }
            else if (a > 127)
            {
            	brancos++;
            }
            if (b <= 127)
            {
            	pretos++;
            }
            else if (b > 127)
            {
            	brancos++;
            }
            if (c <= 127)
            {
            	pretos++;
            }
            else if (c > 127)
            {
            	brancos++;
            }
            if (d <= 127)
            {
            	pretos++;
            }
            else if (d > 127)
            {
            	brancos++;
            }
            if (e <= 127)
            {
            	pretos++;
            }
            else if (e > 127)
            {
            	brancos++;
            }
            if (brancos != 4 || pretos != 1)
            {
                printf("*\n");
            }
            else if (a <= 127)
            {
                printf("A\n");
            }
            else if (b <= 127)
            {
                printf("B\n");
            }
            else if (c <= 127)
            {
                printf("C\n");
            }
            else if (d <= 127)
            {
                printf("D\n");
            }
            else if (e <= 127)
            {
                printf("E\n");
            }
        }
        scanf ("%d",&numero_questoes);
    }
}
