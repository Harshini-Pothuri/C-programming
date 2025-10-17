#include<stdio.h>
int main()
{
	int n,i,s,range;
	printf("Enter range value:");
	scanf("%d",&range);
	for(n=2;n<=range;n++)
	{
	s=1;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			s=0;
			break;
		}
	}
	if(s==1)
	printf("%d ",n);
    }
		return 0;
}
	

