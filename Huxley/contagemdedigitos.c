#include<stdio.h>
#include<string.h>

main()
{
    int num_a,num_b;
    char aux[10];
    int contador[10] = {0};
    scanf("%d%d",&num_a,&num_b);
    int i,j;
    do
    {
        for (i = num_a; i <= num_b; i++)
        {
            sprintf(aux,"%d",i);
            for(j = 0; j < 10; j++)
            {
                if(aux[j] == '0')
                {
                    contador[0]++;
                }
                if(aux[j] == '1')
                {
                    contador[1]++;
                }
                if(aux[j] == '2')
                {
                    contador[2]++;
                }
                if(aux[j] == '3')
                {
                    contador[3]++;
                }
                if(aux[j] == '4')
                {
                    contador[4]++;
                }
                if(aux[j] == '5')
                {
                    contador[5]++;
                }
                if(aux[j] == '6')
                {
                    contador[6]++;
                }
                if(aux[j] == '7')
                {
                    contador[7]++;
                }
                if(aux[j] == '8')
                {
                    contador[8]++;
                }
                if(aux[j] == '9')
                {
                    contador[9]++;
                }
            }
        }
        for (i = 0; i < 10; i++)
        {
            printf("%d",contador[i]);
            if(i != 9)
            {
                printf(" ");
            }
        }
        printf("\n");
        for (i = 0; i < 10; i++)
        {
            contador[i] = 0;
        }
        scanf("%d%d",&num_a,&num_b);
    }while(num_a != 0 && num_b != 0);
}
