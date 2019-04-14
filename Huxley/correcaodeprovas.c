#include <stdio.h>
#include <string.h>

main()
{
    int i, quantidade,j;
    float porcentagem = 0;
    int id[10000];
    int nota [10000] = {0};
    int frequencia[11] = {0};
    int maior_frequencia = 0;
    char gabarito [11];
    char respostas[11];
    scanf ("%s",&gabarito);
    for (i = 0;id[i-1] != 9999;i++)
    {
        scanf("%d",&id[i]);
        if (id[i] != 9999)
        {
            getchar();
            gets (respostas);
            for (j = 0;j < 10;j++)
            {
                if (respostas[j] == gabarito[j])
                {
                    nota[i]++;
                }
            }
            frequencia[nota[i]]++;
            if (nota[i] >= 6)
            {
                porcentagem++;
            }
        }
    }
    quantidade = i - 1;
    porcentagem = (porcentagem / quantidade) * 100;
    for (i = 0;i < 11;i++)
    {
        for (j = 0;j < 11;j++)
        {
            if (frequencia [i] > frequencia[j] && frequencia[i] >= frequencia[maior_frequencia])
            {
                maior_frequencia = i;
            }
        }
    }
    for (i = 0;i < quantidade;i++)
    {
        printf ("%d %d.0\n",id[i],nota[i]);
    }
    printf ("%.1f%c",porcentagem,37);
    printf ("\n%d.0\n",maior_frequencia);
}
