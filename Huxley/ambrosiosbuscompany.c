/*
    Janderson Angelo - P1 2013 UFAL
*/

#include <stdio.h>

typedef struct
{
    int passagem;
    char data[11];
    char saida[255];
    char destino[255];
    char horario[6];
    int poltrona;
    int idade;
    char nome[255];
    int acima_media;
}estrutura_ficha;

lerdados(estrutura_ficha *ficha)
{
    scanf("%d",&(*ficha).passagem);
    if ((*ficha).passagem != -1)
    {
        scanf("%s",&(*ficha).data);
        getchar();
        gets((*ficha).saida);
        gets((*ficha).destino);
        scanf("%s",&(*ficha).horario);
        scanf("%d",&(*ficha).poltrona);
        scanf("%d",&(*ficha).idade);
        getchar();
        gets ((*ficha).nome);
    }
}

calculamedia(estrutura_ficha ficha[],int tamanho)
{
    int i;
    int media = 0;
    for (i = 0;i < tamanho;i++)
    {
        media += ficha[i].idade;
    }
    media /= tamanho;
    return media;
}

main()
{
    estrutura_ficha ficha[50];
    int i = 0;
    int quantidade_fichas;
    int media;
    do
    {
        lerdados(&ficha[i]);
        i++;
    }while(ficha[i-1].passagem != -1);
    quantidade_fichas = i - 1;
    media = calculamedia(ficha,quantidade_fichas);
    for (i = 0;i < quantidade_fichas;i++)
    {
        if (ficha[i].idade > media && ficha[i].poltrona % 2 == 0)
        {
            printf("%s\n",ficha[i].nome);
        }
    }
}
