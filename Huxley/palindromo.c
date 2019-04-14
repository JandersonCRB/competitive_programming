#include <stdio.h>
#include <string.h>
#include <ctype.h>

main()
{
    int linhas,i,j,k;
    int igual = 1;
    char entrada[256];
    scanf("%d",&linhas);
    getchar();
    for (i = 0;i < linhas;i++)
    {
        gets(entrada);
        for (j = 0;j < strlen(entrada);j++)
        {
            if (entrada[j] >= 65 && entrada[j] <= 90)
            {
                entrada[j] += 32; //converte pra maiusuculo
            }
        }

        igual = 1;
        for (j = 0,k = strlen(entrada) - 1;j < strlen(entrada) && igual;j++,k--)
        {
            if (entrada[j] == ' ')
            {
                j++;
            }
            if (entrada [k] == ' ')
            {
                k--;
            }
            if (entrada[j] != entrada[k])
            {
                igual = 0;
            }
        }
        if (igual)
        {
            printf ("SIM\n");
        }
        else
        {
            printf ("NAO\n");
        }
    }
}
