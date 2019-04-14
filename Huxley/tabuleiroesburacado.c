#include <stdio.h>

main()
{
    int x = 4;
    int y = 3;
    int n,i;
    int total = 0;
    scanf ("%d",&n);
    int movimento[n];
    for (i = 0;i < n;i++)
    {
        scanf ("%d",&movimento[i]);
    }
    for (i = 0;i < n;i++)
    {
        switch(movimento[i])
        {
        case 1:
            x += 1;
            y += 2;
            break;
        case 2:
            x += 2;
            y += 1;
            break;
        case 3:
            x += 2;
            y -= 1;
            break;
        case 4:
            x += 1;
            y -= 2;
            break;
        case 5:
            x -= 1;
            y -= 2;
            break;
        case 6:
            x -= 2;
            y -= 1;
            break;
        case 7:
            x -= 2;
            y += 1;
            break;
        case 8:
            x -= 1;
            y += 2;
            break;
        }
        if (x == 1 && y == 3 || x == 2 && y == 3 || x == 2 && y == 5 || x == 5 && y == 4)
        {
            total++;
            break;
        }
        total++;
    }
    printf ("%d",total);
}
