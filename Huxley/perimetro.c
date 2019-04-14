#include <stdio.h>
#include <math.h>

main()
{
	int lados;
	double raio;
	double perimetro;
	scanf("%d%lf",&lados,&raio);
	perimetro = 2 * lados * raio * sin(3.14159265/lados);
	printf("%.2lf", perimetro);
}
