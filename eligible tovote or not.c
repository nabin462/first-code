//WAP to check the person is eligible to vote or not
#include<stdio.h>
int main()
{
	int age;
	printf("enter your age\n");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("your are eligible to vote");
	}
	else
	{
		printf("your are not eligible to vote");
	}
	return 0;
}
