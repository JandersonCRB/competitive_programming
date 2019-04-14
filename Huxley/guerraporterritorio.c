#include <stdio.h>

main()
{
    int tamanho;
    scanf("%d",&tamanho);
    int a[tamanho];
    int i;
    for (i = 0;i < tamanho;i++)
    {
        scanf("%d",&a[i]);
    }
    int soma[2];
    int caso_teste;
    soma[0] = 0;
    soma[1] = 0;
    for (i = 0;i < tamanho;i++)
    {
        soma[1] += a[i];
    }
    for (caso_teste = 0;caso_teste < tamanho;caso_teste++)
    {
        soma[0] += a[caso_teste];
        soma[1] -= a[caso_teste];
//        printf("caso teste = %d\n soma 1 = %d\nsoma 2 = %d\n",caso_teste,soma[0],soma[1]);
        if (soma[0] == soma[1])
        {
//            printf("oi");
            break;
        }
    }
    printf("%d",caso_teste + 1);
}
