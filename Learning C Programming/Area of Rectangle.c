#include<stdio.h>
#include<conio.h>

float FindArea(float l, float b)

{
	float area = l*b;
	return area;
	
}
int main(){
	
	float len, bre;
	printf("Enter the value of length\n");
	scanf("%f",&len);
	printf("Enter the value of breath\n");
	scanf("%f",&bre);
	float area=FindArea(len, bre);
	printf("Area of Rectangle is:%f\n",area);
	return 0;
}
