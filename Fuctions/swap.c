#include<stdio.h>
int main()
{
	int *a,*b;
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	return 0;
}
int swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	printf("%d %d",*a,*b);
}
