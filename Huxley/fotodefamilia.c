#include <stdio.h>

int main()
{
    float v[4];
    int i, j;
    float temp;

    for(i = 0; i < 4; ++i) {
        scanf("%f", &v[i]);

        j = i;

        while(j > 0 && v[j] < v[j - 1]) {
            temp = v[j - 1];
            v[j - 1] = v[j];
            v[j] = temp;
            --j;
        }
    }

        printf ("%.2f\n%.2f\n%.2f\n%.2f",v[0],v[2],v[3],v[1]);
}
