//WAP to check the given number is prime or not
#include<stdio.h>
int main()
{
	int n,count=0,i;
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	
	if(n%i==0)
	{
		count++;
	}
    }
	if(count==2)
	{
		printf("the number is prime");
	}
	else
	{
		printf("the number is not prime");
	}
	return 0;
}
