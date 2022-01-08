#include<stdio.h>
using namespace std;
int main()
{
	int min1,min2;
	int arr[25],n,i;
	printf("\n Enter the size of Array:");
	scanf("%d",&n);
	printf("\n enter %d element;",n);
	{
		for (i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
	}
			if(arr[0]<arr[1])
			{
				min1=arr[0];
				min2=arr[1];
			}
			else
			{
				min1=arr[1];
				min2=arr[0];
			}
			for(i=2;i<n;i++)
			{
			if (arr[i]<min1)
			{
				min2=min1;
				min1=arr[i];
			}
			else if(arr[1]<min2)
			{
				min2=arr[i];
			}
   } 
    printf("\n smallest Ellement is %d",min1);
    printf("\n second smallest Ellement is %d",min2);
}
