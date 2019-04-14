int main()
{
    float nota, temp;
    float v[5];
    int i, j;

    for(i = 0; i < 5; ++i) {
        scanf("%f", &v[i]);

        j = i;

        while(j > 0 && v[j] < v[j - 1]) {
            temp = v[j - 1];
            v[j - 1] = v[j];
            v[j] = temp;
            --j;
        }
    }
        nota=v[1]+v[2]+v[3];
        printf("%.1f\n", nota);
}
