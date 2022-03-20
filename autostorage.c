#include<stdio.h>
void main()
{
	inc();
	inc();
	inc();
}
inc()
{
	auto int a=10;
	a=a+1;
	printf("%d\n",a);
}
//inplace of auto if we keep static the output will be 11,12,13
