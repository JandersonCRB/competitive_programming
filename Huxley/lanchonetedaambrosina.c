#include <stdio.h>

main()
{
    int n;
    scanf ("%d",&n);
    int codigo[n+1];
    float preco[99999] = {0};
    char produto[500];
    int pedido,quantidade,i;
    float total = 0;
    for (i = 1; i <= n; i++)
    {
        scanf ("%d",&codigo[i]);
        getchar();
        gets (produto);
        scanf ("%f",&preco[i]);
    }
    scanf("%d%d",&pedido,&quantidade);
    while (pedido != 0)
    {
        for (i = 1; i <= n; i++)
        {
            if (pedido == codigo[i] && quantidade > 0)
            {
                total += preco[i] * quantidade;
                break;
            }
        }
        scanf("%d",&pedido);
        if (pedido != 0)
        {
            scanf ("%d",&quantidade);
        }
    }
    printf ("%.2f",total);
}
