#include <stdio.h>

main()
{
    int hr,min;
    char p;
    scanf("%d%d",&hr,&min);
    if(hr<=12)
    {
        char p = 'am';
    }
    if (hr>=12)
    {
        char p='pm';
        hr=hr-12;
    }
    printf("%d\n%d\n%s",hr,min,p);
}
