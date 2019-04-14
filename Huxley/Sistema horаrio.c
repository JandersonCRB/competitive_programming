#include <stdio.h>

int main()
{
    int hr,min,aux;
    aux=0;
    scanf("%d%d",&hr,&min);
    if (hr==12)
    {
        printf("12\n%02d\npm",min);
        aux=1;
    }
    if (hr>12&&hr!=24&&aux==0)
    {
        printf("%02d\n%02d\npm",hr-12,min);
    }
    if (hr<12&&hr!=24)
    {
        printf ("%02d\n%02d\nam",hr,min);
    }
    if (hr==24)
    {
        printf("00\n%d\nam",hr);
    }
}
