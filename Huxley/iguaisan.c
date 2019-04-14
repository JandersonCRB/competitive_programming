

int main()
{
    int v[1000];
    int i;
    for(i = 0; i <= 100; i++)
        {
        scanf("%d", &v[i]);
        }
    for(i = 0; i < 100; i++)
    {
        if (v[100]==v[i])
        {
            printf ("%d\n",i);
        }
    }
}
