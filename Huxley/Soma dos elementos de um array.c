#include <stdio.h>

int main()
{
    float n[10000],soma;
    int i,d;
    i=0;
    scanf("%d",&d);
    while(i<d)
    {
        i++;
        scanf("%f",&n[i]);
        soma=soma+n[i];
    }
    printf("%.0f",soma);
}
