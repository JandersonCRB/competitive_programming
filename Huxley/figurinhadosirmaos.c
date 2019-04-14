#include <stdio.h>

main()
{
    int i, aux, n, repetido;
    int joao=0;
    int maria=0;
    int somadejoao=0;
    int somademaria=0;
    int maiorsoma;
    int figurinha [10000];
    scanf("%d",&n);
    // O código roda a quantidade de vezes que for inserida no scanf na linha de cima
    for (i = 1;i < n + 1;i++)
    {
        scanf("%d",&figurinha[i]);
        repetido = 0;
        //Este for serve pra checar se o valor inserido no scanf acima já existe, caso seja positivo, ele conta
        //uma figurinha a mais para joão ou maria, caso não exista ele conta mais uma figurinha e adiciona à soma
        for(aux = i - 1;aux >= 0;aux--)
        {
            if(figurinha[i] == figurinha[aux])
            {
                if(figurinha[i] % 2 == 0)
                {
                    joao++;
                    repetido = 1;
                    break;
                }
                else if(figurinha[i] % 2 != 0)
                {
                    maria++;
                    repetido = 1;
                    break;
                }
            }
        }
        if(figurinha[i] % 2 == 0 && repetido == 0)
        {
            joao++;
            somadejoao += figurinha[i];
        }
        else if(figurinha[i] % 2 != 0&&repetido == 0)
        {
            maria++;
            somademaria += figurinha[i];
        }
    }
    if (somademaria >= somadejoao)
    {
        maiorsoma = somademaria;
    }
    else if (somadejoao >= somademaria)
    {
        maiorsoma = somadejoao;
    }
    printf ("%d\n%d\n%d",joao,maria,maiorsoma);
}
