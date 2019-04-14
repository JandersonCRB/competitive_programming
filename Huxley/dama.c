#include <stdio.h>
#include <math.h>
#include <stdbool.h>
typedef struct
{
    int x;
    int y;
} inicial;
typedef struct
{
    int x;
    int y;
} final;
typedef struct
{
    inicial inicial;
    final final;
} coordenada;

bool diagonal(coordenada coordenada)
{
	int i;
	for (i = 1;i < 8;i++)
	{
		if (coordenada.inicial.x + i == coordenada.final.x && coordenada.inicial.y + i == coordenada.final.y)
		{
			return true;
		}
		else if(coordenada.inicial.x - i == coordenada.final.x && coordenada.inicial.y + i == coordenada.final.y)
		{
			return true;
		}
		else if(coordenada.inicial.x - i == coordenada.final.x && coordenada.inicial.y - i == coordenada.final.y)
		{
			return true;
		}
		else if(coordenada.inicial.x + i == coordenada.final.x && coordenada.inicial.y - i == coordenada.final.y)
		{
			return true;
		}
	}
	return false;
}

main()
{
    coordenada coordenada;
    scanf("%d%d%d%d",&coordenada.inicial.x,&coordenada.inicial.y,&coordenada.final.x,&coordenada.final.y);
    while (coordenada.inicial.x != 0 && coordenada.inicial.y != 0 && coordenada.final.x != 0 && coordenada.final.y)
    {
        if (coordenada.inicial.x == coordenada.final.x && coordenada.inicial.y == coordenada.final.y)
        {
            printf("0\n");
        }
        else if ((coordenada.inicial.x == coordenada.final.x ^ coordenada.inicial.y == coordenada.final.y) ^ diagonal(coordenada))
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }
        scanf("%d%d%d%d",&coordenada.inicial.x,&coordenada.inicial.y,&coordenada.final.x,&coordenada.final.y);
    }
}
