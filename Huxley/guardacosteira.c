#include <stdio.h>
#include <stdbool.h>
#include <math.h>

main()
{
    int d, vf, vg;
    int i;
    bool achou;
    scanf("%d%d%d",&d,&vf,&vg);
    while(d != -1 && vf != -1 && vg != -1)
    {
        if(sqrt(144 + pow(d,2)) /vg <= 12.0 / vf)
        {
            achou = true;
        }
        else
        {
            achou = false;
        }
        if(!achou)
        {
            printf("N\n");
        }
        else
        {
            printf("S\n");
        }
        scanf("%d%d%d",&d,&vf,&vg);
    }
}
