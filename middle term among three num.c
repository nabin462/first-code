//WAP to check the second largest number among three number
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three number\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a<c||a<b&&a>c)
	{
		printf("a is middle term");
	}
	else if(b>a&&b<c||b<a&&b>c)
	{
		printf("b  is middle term");
	}
	else
	{
		printf("c is middle term");
	}
	return 0;
}
