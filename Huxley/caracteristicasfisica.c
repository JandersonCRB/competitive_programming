#include<stdio.h>

main()
{
    int idade;
    int total = 0;
    char sexo[2], cor_olhos[2], cabelos[2];
    int mais_velho = 0;
    int estatistica = 0;
    scanf("%d",&idade);
    while(idade != -1)
    {
        getchar();
        scanf("%c\n%c\n%c",&sexo, &cabelos, &cor_olhos);
        if (idade > mais_velho)
        {
            mais_velho = idade;
        }
        if (sexo[0] == 'f')
        {
            if(cor_olhos[0] == 'v' && cabelos[0] == 'l' && idade >= 18 && idade <= 35)
            {
                estatistica++;
            }
        }
        total++;
        scanf("%d",&idade);
    }
    printf("Mais velho: %d\n",mais_velho);
    printf("Mulheres com olhos verdes, loiras com 18 a 35 anos: %.2f%%",(float) (estatistica * 100) / total);
}

