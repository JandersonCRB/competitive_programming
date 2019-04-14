#include <stdio.h>
#include <stdbool.h>

bool vencedor(int matriz[3][3],int caso_teste)
{
    if (matriz [0][0] == caso_teste && matriz[0][1] == caso_teste && matriz [0][2] == caso_teste ||
        matriz [1][0] == caso_teste && matriz[1][1] == caso_teste && matriz [1][2] == caso_teste ||
        matriz [2][0] == caso_teste && matriz[2][1] == caso_teste && matriz [2][2] == caso_teste ||
        matriz [0][0] == caso_teste && matriz[1][0] == caso_teste && matriz [2][0] == caso_teste ||
        matriz [0][1] == caso_teste && matriz[1][1] == caso_teste && matriz [2][1] == caso_teste ||
        matriz [0][2] == caso_teste && matriz[1][2] == caso_teste && matriz [2][2] == caso_teste ||
        matriz [0][0] == caso_teste && matriz[1][1] == caso_teste && matriz [2][2] == caso_teste ||
        matriz [0][2] == caso_teste && matriz[1][1] == caso_teste && matriz [2][0] == caso_teste ||
        matriz [2][2] == caso_teste && matriz[1][1] == caso_teste && matriz [0][0] == caso_teste)
    {
        return true;
    }
    else
    {
        return false;
    }
}

main()
{
    char entrada;
    int numero_de_jogos,i,j,k;
    int O = 0;
    int X = 0;
    int jogo_da_velha[3][3];
    scanf ("%d",&numero_de_jogos);
    for (k = 0;k < numero_de_jogos;k++)
    {
        O = 0;
        X = 0;
        for (i = 0;i < 3;i++)
        {
            for (j = 0;j < 3;j++)
            {
                getchar();
                scanf ("%c",&entrada);
                if (entrada == 'O')
                {
                    jogo_da_velha[i][j] = 0;
                    O++;
                }
                else if (entrada == 'X')
                {
                    jogo_da_velha[i][j] = 1;
                    X++;
                }
                else
                {
                    jogo_da_velha[i][j] = 2;
                }
            }
        }
//            printf ("%d",vencedor(jogo_da_velha,1));
            if (O > X || O == X && vencedor(jogo_da_velha,0) && vencedor(jogo_da_velha,1) || X > O + 1)
            {
                printf ("ILEGAL\n");
            }
            else if (vencedor(jogo_da_velha,1))
            {
                printf("X_VENCEU\n");
            }
            else if (vencedor(jogo_da_velha,0))
            {
                printf("O_VENCEU\n");
            }
            else
            {
                printf("EM_ANDAMENTO\n");
            }
    }
}
