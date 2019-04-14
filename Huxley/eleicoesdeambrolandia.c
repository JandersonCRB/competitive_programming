#include <stdio.h>

main()
{
    int voto,alibaba=0,alcapone=0,branco=0,nulo=0,ganhador;
    float total=-1,alibabaporcent=0,alcaponeporcent=0;
    for (voto=1;voto!=-1;total++)
    {
        scanf("%d",&voto);
        if (voto==83)
        {
            alibaba++;
        }
        if (voto==93)
        {
            alcapone++;
        }
        if (voto==0)
        {
            branco++;
        }
        if(voto!=0&&voto!=83&&voto!=93&&voto!=-1)
        {
            nulo++;
            total--;
        }
    }
    if (alcapone>alibaba)
    {
        ganhador=93;
    }
    if (alibaba>alcapone)
    {
        ganhador=83;
    }
    //isso server para calcular hygasui
    alibabaporcent=(100*alibaba)/total;
    alcaponeporcent=(100*alcapone)/total;
    printf ("%d\n%d\n%d\n%d\n%d\n%.2f\n%.2f",alibaba,alcapone,branco,nulo,ganhador,alibabaporcent,alcaponeporcent);
}
