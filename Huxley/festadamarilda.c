#include<stdio.h>

int compararPalavras(char palavra1[], char palavra2[])
{
    int i;
    int tamanho;
    if (strlen(palavra1) >= strlen(palavra2))
    {
        tamanho = strlen(palavra2);
    }
    else if(strlen(palavra2) > strlen(palavra1))
    {
        tamanho = strlen(palavra1);
    }
    for (i = 0; i < tamanho; i++)
    {
        if(palavra1[i] < palavra2[i])
        {
            return 1;
        }
        else if(palavra1[i] > palavra2[i])
        {
            return 2;
        }
    }
}

ordemAlfabetica(char strings[][255],int tamanho)
{
    char aux[250];
    int i,j;
    for (i = 0; i < tamanho; i++)
    {
        for(j = i + 1; j < tamanho; j++)
        {
            if(i != j && compararPalavras(strings[i],strings[j]) == 2)
            {
                strcpy(aux,strings[i]);
                strcpy(strings[i],strings[j]);
                strcpy(strings[j],aux);
            }
        }
    }
}

main()
{
    int quantidade;
    char convidados[1000][255];
    int i;
    scanf("%d",&quantidade);
    while(quantidade != 0)
    {
    	getchar();
        for (i = 0; i < quantidade; i++)
        {
            gets(convidados[i]);
        }
        ordemAlfabetica(convidados,quantidade);
        for (i = 0; i < quantidade; i++)
        {
            printf("%s\n",convidados[i]);
        }
        scanf("%d",&quantidade);
    }
}
