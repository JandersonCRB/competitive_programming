#include <stdio.h>
main()
{
int n,a,b,c,d,e;
scanf("%d",&n);
e=n/50;
d=(n%50)/20;
c=((n-((d*20)+(e*50)))/10);
b=(n%10)/5;
a=(n%10)%5;
printf("Notas de 50: %d\nNotas de 20: %d\nNotas de 10: %d\nNotas de 5: %d\nNotas de 1: %d",e,d,c,b,a);
}

