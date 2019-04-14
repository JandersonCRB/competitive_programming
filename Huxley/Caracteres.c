#include <stdio.h>

main()
{
    int n,i;
    scanf ("%d",&n);
    while (n != 0)
    {
       char caracteres[n];
       getchar();
       gets(caracteres);
       for (i = n - 1;i >= 0;i--)
       {
           printf("%c",caracteres[i]);
       }
       printf("\n");
       scanf ("%d",&n);
    }

}
