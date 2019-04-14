#include <stdio.h>

main()
{
  char a,b,c,d;
  int auxa,auxb,auxc,auxd;
  scanf("%c%c%c%c",&a,&b,&c,&d);
  auxa=a-48;
  auxb=b-48;
  auxc=c-48;
  auxd=d-48;
  if (auxd!=0&&auxc!=0&&auxb!=0)
  {
    printf ("%d%d%d%d",auxd,auxc,auxb,auxa);
  }
  if (auxd==0&&auxc!=0&&auxb!=0)
  {
    printf ("%d%d%d",auxc,auxb,auxa);
  }
  if (auxd==0&&auxc==0&&auxb!=0)
  {
    printf ("%d%d",auxb,auxa);
  }
  if (auxd==0&&auxc==0&&auxb==0)
  {
    printf ("%d",auxa);
  }
}
