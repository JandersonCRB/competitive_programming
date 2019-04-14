#include <stdio.h>
#include <string.h>

main()
{
    char entrada[100][500];
    int i,j,linhas;
    int alterna = 0;
    for (i = 0;entrada[i-1][strlen(entrada[i-1])-1] != '_' && i < 100;i++)
    {
        gets (entrada[i]);
    }
    linhas = i - 1;
    for (i = 0;i < linhas;i++)
    {
        for (j = 0;j < strlen(entrada[i]);j++)
        {
            if (entrada[i][j] == '+')
            {
                switch (alterna)
                {
                case 0:
                    entrada [i][j] = '*';
                    alterna = 1;
                    break;
                case 1:
                    entrada [i][j] = '#';
                    alterna = 0;
                    break;
                }
            }
        }
    }
    for (i = 0;i < linhas;i++)
    {
        printf ("%s\n",entrada[i]);
    }
}
