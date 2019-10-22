#include<stdio.h>
void swap(int *x,int *y);
int main()
{
	int x,y;
	printf("Enter two numbers: ");
	scanf("%d%d",&x,&y);
	printf("\nBefore swapping \n");
	printf("Value of x= %d",x);
	printf("\nValue of y= %d",y);
	swap(&x,&y);
	printf("\n\nAfter swapping \n");
	printf("Value of x= %d",x);
	printf("\nValue of y= %d",y);
}
void swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	printf("\n\nInside swap function \n");
	printf("Value of x= %d",x);
	printf("\nValue of y= %d",y);
}
