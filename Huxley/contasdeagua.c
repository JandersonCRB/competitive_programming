#include <stdio.h>

main()
{
    int n,v;
    scanf("%d",&n);
    if(n<=10)
    {
        v=7;
    }
    if(n<=30&&n>=11)
    {
        v=7+(n-10);
    }
    if(n>=31&&n<=100)
    {
        v=27+((n-30)*2);
    }
    if(n>100)
    {
        v=167+(n-100)*5;
    }
    printf("%d",v);
}
