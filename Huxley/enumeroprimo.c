#include <stdio.h>
main()
{
    int num, i, achou;
    while (num != -1)
    {
        scanf("%d", &num);
        i = 2;
        achou = 0;
        while (i <= (num/2) && !achou && num > 1)
        {
            if (num % i == 0)
            {
                achou = 1;
            }
            i++;
        }
        if (achou && num != -1 || num < 0 && num != -1 || num == 0 || num == 1)
        {
            printf("0\n");
        }
        else if (num != -1)
        {
            printf("1\n");
        }
    }
}
