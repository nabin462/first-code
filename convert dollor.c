//WAP to convert the us dollor in rupees
#include<stdio.h>
int main()
{
	float r,d,rupees;
	printf("enter the dollor\n");
	scanf("%f",&d);
	printf("enter the rate\n");
	scanf("%f",&r);
	rupees=d*r;
	printf("rupees=%f",rupees);
	return 0;
}
