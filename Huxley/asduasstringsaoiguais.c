#include <stdio.h>
#include <string.h>

main()
{
    char string1[50],string2[50];
    gets (string1);
    gets (string2);
    if (strcmp (string1,string2)==0)
    {
        printf("IGUAIS");
    }
    else
    {
        printf ("DIFERENTES");
    }
}
