#include<stdio.h>

struct Distance
{
	int feet;
	float inch;
	
}; 
int main()
{
	struct Distance d1,d2,sum;
	printf("Enter fst Distance feet \n");
	scanf("%d",&d1.feet);
		printf("Enter sec Distance feet \n");
	scanf("%d",&d2.feet);
		printf("Enter fst Distance inch \n");
	scanf("%f",&d1.inch);
		printf("Enter sec Distance inch \n");
	scanf("%f",&d2.inch);
	float suminch = 0;
	suminch =d1.inch + d2.inch;
	int extrafeet=0;
	while(suminch>=12)
	{
		extrafeet++;
		suminch=suminch-12;
	}
	int totalfeet=0;
	totalfeet=d1.feet+d2.feet+extrafeet;
	printf("Total distance in feet is: %d and inch %f", totalfeet,suminch);
	return 0;
}
