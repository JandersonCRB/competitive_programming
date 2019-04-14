#include <stdio.h>

//aumenta o array, se estourar o limite volta pra 0
int aumentarArray(int i, int tamanho)
{
	if (i + 1 == tamanho)
	{
		return 0;
	}
	else
	{
		return i + 1;
	}
}

//diminui o array, se estourar o limite(que é 0) pula pra ultima posição possivel
int diminuirArray(int i, int tamanho)
{
	if (i - 1 < 0)
	{
		return tamanho - 1;
	}
	else
	{
		return i - 1;
	}
}

//verifica pedras a direita
int verificaDireita(char colar[],int tamanho,int posicao)
{
	int j;
	int primeira_vez = 1;
	int soma = 0;
	char aux[2];
	aux[0] = 'w';
	for(j = posicao;aux[0] == 'w';j = aumentarArray(j,tamanho))
	{
		aux[0] = colar[j];
		if(!primeira_vez)
		{
			if (j == posicao)
			{
				break;
			}
		}
		primeira_vez = 0;
	}
	j = posicao;
	soma++;
	j = aumentarArray(j,tamanho);
	while(colar[j] == 'w' || colar[j] == aux[0])
	{
		soma++;
		j = aumentarArray(j, tamanho);
		if (j == posicao)
		{
			break;
		}
	}
//	printf("direita = %d\n",soma);
	return soma;
}

//verifica pedras a esquerda
int verificaEsquerda(char colar[],int tamanho,int posicao)
{
	int j;
	int soma = 0;
	char aux[2];
	aux[0] = 'w';
	j = posicao;
	j = diminuirArray(j,tamanho);
	for(;aux[0] == 'w';j = diminuirArray(j,tamanho))
	{
		aux[0] = colar[j];
		if (j == posicao)
		{
			break;
		}
	}
	j = posicao;
	soma++;
	j = diminuirArray(j,tamanho);
	j = diminuirArray(j,tamanho);
	while(colar[j] == 'w' || colar[j] == aux[0])
	{
		soma++;
		j = diminuirArray(j, tamanho);
		if (j == posicao)
		{
			break;
		}
	}
//	printf("esquerda = %d\n",soma);
	return soma;
}

main()
{
    int tamanho;
    int soma = 0;
    int maior = 0;
    int i;
    scanf("%d",&tamanho);
    char colar[tamanho+1];
    char aux[2];
    getchar();
    gets(colar);
    for (i = 0; i < tamanho; i++)
    {
    	soma = 0;
    	soma += verificaDireita(colar,tamanho,i);
		soma += verificaEsquerda(colar,tamanho,i);
//		if (soma == 11) printf("\ni = %d\n",i);
		if (soma >= tamanho)
		{
			maior = tamanho;
			break;
		}
		else if (maior < soma)
		{
//			printf("\nmaior < soma %d\n",i);
			maior = soma;
		}
    }
    printf("%d\n",maior);
}
