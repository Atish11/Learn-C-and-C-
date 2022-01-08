#include<stdio.h>
int main()
{
int x=10;
int *p;
p=&x;
printf("%u\n",&x);
printf("%d\n",x);
printf("%u\n",p);
printf("%d",*p);
x=20;
printf("%u\n",p);
printf("%d\n",x);
printf("%u\n",*p);
printf("%d\n",&x);
*p=85;
printf("%u\n",p);
printf("%u\n",&x);
printf("%d\n",*p);
printf("%d\n",x);
}
