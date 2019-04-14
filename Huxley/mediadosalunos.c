#include <stdio.h>

main()
{
    float x,y,z,media;
    scanf("%f%f%f",&x,&y,&z);
    media=(x+y+z)/3;
    if(media>=7)
    {
        printf ("aprovado");
    }
    if (media<3)
    {
        printf ("reprovado");
    }
    if (3<=media&&media<7)
    {
        printf("prova final");
    }
}
