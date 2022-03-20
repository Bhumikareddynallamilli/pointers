#include<stdio.h>
int main()
{
	int a=10,b=3;
	int *p1,*p2;
	p1=&a;
	p2=&b;
	printf("Address of a is %d\n",*p1);
	printf("Address of b is %d\n",*p2);
	printf("%d\n",*p1+*p2);
	printf("%d\n",*p1-*p2);
	printf("%d\n",*p1**p2);
	printf("%d\n",*p1/(*p2));
	printf("%d\n",*p1%*p2);
}
