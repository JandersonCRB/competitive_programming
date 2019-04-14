#include <stdio.h>
#include <math.h>

int main()
{
	int dias, kmPercorridos;
	scanf("%d%d",&dias,&kmPercorridos);
	if(kmPercorridos < dias * 100)
		kmPercorridos = 0;
	else
		kmPercorridos -= dias * 100;
	printf("%.2f%", (double) (dias * 90) + (kmPercorridos * 12));
}
