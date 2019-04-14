#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//rodarString(char n[])
//{
//    int i;
//    for (i = 0; i < strlen(n); i++)
//    {
//        if (n[i] == '0')
//        {
//            return true;
//        }
//    }
//    return false;
//}

main()
{
    char d[2];
    char n[10000];
    char saida[10000];
    bool achou;
    bool tudozero;
    int i;
    int j;
    scanf("%c",&d);
    getchar();
    gets(n);

    while (d[0] != '0' || n[0] != '0')
    {
    	j = 0;
    	tudozero = true;
        achou = false;
//		for(i = 0;i < strlen(n);i++)
//		{
//			if(n[i] == d[0])
//			{
//				if(n[i] != '0')
//				{
//                    achou = true;
//                    break;
//				}
//
//			}
//		}
        for (i = 0; i < strlen(n); i++)
        {
            if(n[i] != d[0])
            {
                saida[j] = n[i];
                j++;
            }
        }
        saida[j] = '\0';
        for (i = 0;i < strlen(saida);i++)
		{
			if (saida[i] != '0')
			{
				tudozero = false;
			}
		}
		if (!tudozero)
		{
			printf("%s\n",saida);
		}
		else
		{
			printf("0\n");
		}
        scanf("%c",&d);
        getchar();
        gets(n);
    }
}
