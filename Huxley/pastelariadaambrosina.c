#include <stdio.h>

main()
{
    float pastel[4],empada[4],kibe[4];
    float preco_pastel,preco_empada,preco_kibe;
    float precos[4];
    int i;
    for (i = 0;i < 4;i++)
    {
        scanf("%f",&pastel[i]);
    }
    for (i = 0;i < 4;i++)
    {
        scanf("%f",&empada[i]);
    }
    for (i = 0;i < 4;i++)
    {
        scanf("%f",&kibe[i]);
    }
    for (i = 0;i < 4;i++)
    {
        scanf("%f",&precos[i]);
    }
    for (i = 0;i < 4;i++)
    {
        preco_pastel += pastel[i] * precos[i];
        preco_empada += empada[i] * precos[i];
        preco_kibe += kibe[i] * precos[i];
    }
        printf ("%.2f\n%.2f\n%.2f",preco_pastel,preco_empada,preco_kibe);

}
