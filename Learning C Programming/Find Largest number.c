#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter then of the array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the value for the array:");
	for(i=0;i<=n;i++)
	{
		prinf("Enter number %d:",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++)
	{
		if(arr[0]<arr[i])
		arr[0]=arr[i];
		
	
	printf("Largest number =%d",arr[0]);
    }
	return 0;

}
