int main()
{
    int v[100];
    int i,soma=1;

    for(i = 0; i < 100; ++i)
        {
        scanf("%d", &v[i]);
        }
        i=98;
    while(i>=0)
    {
        if (v[99]==v[i])
        {
            printf ("%d",i);
        }
        i--;
    }
}
