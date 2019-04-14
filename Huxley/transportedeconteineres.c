#include<stdio.h>
typedef struct
{
	int altura;
	int largura;
	int comprimento;
}paralelepidedo;

main()
{
	paralelepidedo navio;
	paralelepidedo conteiner;
	scanf("%d%d%d",&conteiner.altura,&conteiner.largura,&conteiner.comprimento);
	scanf("%d%d%d",&navio.altura,&navio.largura,&navio.comprimento);
	printf("%d",(navio.altura / conteiner.altura) * (navio.largura / conteiner.largura) * (navio.comprimento / conteiner.comprimento));
}
