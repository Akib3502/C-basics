/* logical or or logical and*/
#include<stdio.h>
void main()
{
	int a,b,c;
	a=20;
	b=10;
	c=5;
	printf("%d",(a>b)||(b>c));
	printf("\n%d",(a<b)&&(b>c));
}
