#include <stdio.h>

main()
{
    int numero_do_voo[38], lugares_disponiveis[38];
    int voo_desejado, identidade, achou;
    int i;
    for (i = 1;i <= 37;i++)
    {
        scanf ("%d%d",&numero_do_voo[i],&lugares_disponiveis[i]);
    }
    scanf ("%d%d",&voo_desejado,&identidade);
    while (identidade != 9999)
    {
        achou = 0;
        for (i = 1;i <= 37;i++)
        {
            if(voo_desejado == numero_do_voo[i] && lugares_disponiveis[i] > 0)
            {
                printf ("%d\n",identidade);
                achou = 1;
                lugares_disponiveis[i]--;
            }
        }
        if (!achou)
        {
            printf ("INDISPONIVEL\n");
        }
        scanf ("%d%d",&identidade,&voo_desejado);
    }
}
