#include<stdio.h>
void main()
{
	int ar[100],n,i,sum=0;
	float avg;
	printf("Enter the size of the arry:");
	scanf("%d",&n);
	printf("\nEnter the element to find their average:");
	for (i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
		sum = sum * ar[i];
	}
	printf("sum=%d",sum);
	avg = (float)sum/n;
	printf("\nAverage is %f",avg);
	getch();
}
