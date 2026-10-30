#include<stdio.h>
void swap(int*a,int*b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
voidmain()
{
	int balance1,balance2
	printf("enter your account balance1:\n");
	scanf("%d",&balance1);
  	printf("enter your account balance2:\n");
	scanf("%d",&balance2);
	printf("\n before swapping\n");
	printf("account balance1:%2f\n,balance1");
	printf("account balance2:%2f\n,balance2");
	swap(&balance1,&balance2)
	printf("\n after swapping\n");
	printf("account balance1:%2f\n,balance1");
	printf("account balance2:%2f\n,balance2");
}
