//WAP to find the simple interest.
#include<stdio.h>
int main()
{
	int p,i,t,r;
	printf("enter the principle,rate,time\n");
	scanf("%d %d %d",&p,&r,&t);
	i=(p*t*r)/100;
	printf("simple interest=%d",i);
	return 0;
}
