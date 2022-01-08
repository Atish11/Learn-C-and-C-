#include<stdio.h>
int main()
{
	int firstnumber,secondnumber;
	int *p1,*p2;
	printf("Enter firstnumber\n");
	scanf("%d",&firstnumber);
	printf("Enter secondnumber\n");
	scanf("%d",&secondnumber);
	p1=&firstnumber;
	p2=&secondnumber;
	int sum =0;
	sum = *p1+*p2;
	printf("sum is %d",sum);
}
