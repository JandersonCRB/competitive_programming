#include <stdio.h>

main()
{
    int i,j,k,y,x,vencedor;
    char jogo[3][3];

    scanf("%d",&k);
    getchar();

    while(k>0)
    {
        vencedor=0;
        y=0;
        x=0;
        for(i=0; i<3; i++)
        {

            for(j=0; j<3; j++)
            {
                scanf("%c",&jogo[i][j]);
                getchar();
                if (jogo[i][j]=='O')
                {
                    y++;
                }
                else if (jogo[i][j]=='X')
                {
                    x++;
                }
            }
        }
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {

            }

        }

        for(i=0; i<3; i++)
        {
            if ((jogo[i][0])=='X' && (jogo[i][1])=='X' && (jogo[i][2])=='X')
            {

                if(vencedor==0)
                {
                    vencedor=1;
                }
                else
                {
                    vencedor=3;
                    break;
                }
            }
            else if((jogo[i][0])=='O' && (jogo[i][1])=='O' && (jogo[i][2])=='O')
            {
                if(vencedor==0)
                {
                    vencedor=2;
                }
                else
                {
                    vencedor=3;
                    break;
                }
            }
        }

        if (vencedor!=3)
        {
            for(j=0; j<3; j++)
            {
                if ((jogo[0][j])=='X' && (jogo[1][j])=='X' && (jogo[2][j])=='X')
                {
                    if(vencedor==0)
                    {
                        vencedor=1;
                    }
                    else
                    {
                        vencedor=3;
                        break;
                    }
                }
                else if ((jogo[0][j])=='O' && (jogo[1][j])=='O' && (jogo[2][j])=='O')
                {
                    if(vencedor==0)
                    {
                        vencedor=2;
                    }
                    else
                    {
                        vencedor=3;
                        break;
                    }
                }
            }
        }

        if(vencedor!=3)
        {
            if ((jogo[0][0])=='X' && (jogo[1][1])=='X' && (jogo[2][2])=='X')
            {
                if(vencedor==0)
                {
                    vencedor=1;
                }
                else
                {
                    vencedor=3;
                    break;
                }
            }
            else if ((jogo[0][0])=='O' && (jogo[1][1])=='O' && (jogo[2][2])=='O')
            {
                if(vencedor==0)
                {
                    vencedor=2;
                }
                else
                {
                    vencedor=3;
                    break;
                }
            }
        }

        if(vencedor!=3)
        {
            if ((jogo[2][0])=='X' && (jogo[1][1])=='X' && (jogo[0][2])=='X')
            {
                if(vencedor==0)
                {
                    vencedor=1;
                }
                else
                {
                    vencedor=3;
                    break;
                }
            }
            else if ((jogo[2][0])=='O' && (jogo[1][1])=='O' && (jogo[0][2])=='O')
            {
                if(vencedor==0)
                {
                    vencedor=2;
                }
                else
                {
                    vencedor=3;
                    break;
                }
            }
        }


        if(vencedor==1)
        {
            if (y!=x-1)
            {
                vencedor=3;
            }
        }
        else if (vencedor==2)
        {
            if (x!=y)
            {
                vencedor=3;
            }
        }
        if(vencedor==1)
        {
            printf("X_VENCEU\n");
        }
        else if (vencedor==2)
        {
            printf("O_VENCEU\n");
        }
        else if (vencedor==3)
        {
            printf("ILEGAL\n");
        }
        else
        {
            printf("EM_ANDAMENTO\n");
        }



        k--;
    }

}
