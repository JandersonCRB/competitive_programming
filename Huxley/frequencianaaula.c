#include<stdio.h>

main()
{
    int n;
    scanf("%d",&n);
    int i;
    int temp;
    int total = 0;
    int presentes[1000000] = {0};
    for (i = 0; i < n; i++)
    {
        scanf("%d",&temp);
        if (presentes[temp] == 0)
		{
			total++;
			presentes[temp] = temp;
		}
    }
    printf("%d",total);
}
