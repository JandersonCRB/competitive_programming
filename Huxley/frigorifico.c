int main()
{
    float temp;
    float v[10000];
    int i,j,n,id[10000];
    scanf ("%d",&n);
    for(i = 0; i < n; ++i)
    {
        scanf("%d%f", &id[i],&v[i]);

        j = i;

        while(j > 0 && v[j] < v[j - 1]) {
            temp = v[j - 1];
            v[j - 1] = v[j];
            v[j] = temp;
            temp = id[j - 1];
            id[j - 1] = id[j];
            id[j] = temp;
            --j;

        }
    }
    printf("Gordo: id: %d peso: %.2fKg\nMagro: id: %d peso: %.2fKg",id[i-1],v[i-1],id[0],v[0]);
}
