#include<stdio.h>
int main()
{
	float r,h,volume;
	printf("Enter r and h");
	scanf("%f %f" , &r, &h);
	volume= 22/7*r*r*h;
	printf("Volume %.2f",volume);
	return 0;
}
