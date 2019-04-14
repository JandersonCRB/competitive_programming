#include <stdio.h>

main()
{
    int linhas,i,j;
    int buracos = 0;
    char entrada[101];
    scanf ("%d",&linhas);
    getchar();
    for (i = 0;i < linhas;i++)
    {
        buracos = 0;
        gets(entrada);
        for (j = 0;j < strlen(entrada);j++)
        {
            if (entrada[j] == 'Q' || entrada[j] == 'R' || entrada[j] == 'O' || entrada[j] == 'P' ||
                entrada[j] == 'A' || entrada[j] == 'D')
            {
                buracos++;
            }
            else if(entrada[j] == 'B')
            {
                buracos += 2;
            }
        }
        printf("%d\n",buracos);
    }
}
