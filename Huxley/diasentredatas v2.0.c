#include <stdio.h>
int bissexto(int ano)
{
    if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0)
    {
       return 1;
    }
    else
    {
        return 0;
    }
}

main()
{
    int mes[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int i;
    int dia_inicial,mes_inicial,ano_inicial;
    int dia_final,mes_final,ano_final;
    int entre_os_anos;
    int dias = 0;
    scanf ("%d/%d/%d",&dia_inicial,&mes_inicial,&ano_inicial);
    scanf ("%d/%d/%d",&dia_final,&mes_final,&ano_final);
    if (ano_inicial != ano_final)
    {
        dias += mes[mes_inicial] - dia_inicial;
        for (i = mes_inicial + 1;i <= 12;i++)
        {
            dias += mes[i];
        }
        dias += dia_final;
        for (i = 1;i < mes_final;i++)
        {
            dias += mes[i];
        }
        dias += ((ano_final - ano_inicial) -1) * 365;
    }
    else if (mes_inicial != mes_final)
    {
        dias += mes[mes_inicial] - dia_inicial;
        dias += dia_final;
        for (i = mes_inicial + 1;i < mes_final;i++)
        {
            dias += mes[i];
        }
    }
    else
    {
        dias += dia_final - dia_inicial;
    }
    if (bissexto(ano_inicial) && mes_inicial <= 2 && (dia_final != 29 && mes_final != 02))
    {
        dias++;
    }
    if (bissexto(ano_final) && mes_final > 2 && ano_inicial != ano_final)
    {
        dias++;
    }
    for (entre_os_anos = ano_inicial + 1;entre_os_anos < ano_final;entre_os_anos++)
    {
        if (bissexto(entre_os_anos))
        {
            dias++;
        }
    }
    printf ("%d",dias);
}
