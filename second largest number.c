#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enters three numbers");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a<c||a<b&&a>c)
	{
		printf("a=%d is middle term",a);
	}
	else if(b>a&&b<c||b<a&&b>c)
	{
		printf("b=%d is middle term",b);
	}
	else
	{
		printf("c=%d is middle term",c);
	}
}
