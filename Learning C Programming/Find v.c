#include<stdio.h>
#include<math.h>
int main()
{
	float x, v;
	printf("Enter x");
	scanf("%f", &x);
	v=pow(x,5)+3*pow(x,7)+sqrt(x);
	printf("The v is %f",v);
	return 0;
}
