#include <stdio.h>

main()
{
    int intervalos, velocidade, tempo;
    int distancia = 0;
    scanf ("%d",&intervalos);
    for (;intervalos > 0;intervalos--)
    {
        scanf ("%d%d",&tempo, &velocidade);
        distancia+=tempo*velocidade;
    }
    printf ("%d",distancia);
}
