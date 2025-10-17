#include<stdio.h>
int main()
{
	int a[20][20],n,m,i,j;
    printf("Enter no.of rows and no.of columns:");
    scanf("%d %d",&m,&n);
    if(m==n)
    {
	printf("Enter %d elements:\n",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	 printf("Matrix form of A is:\n");
	for(i=0;i<m;i++)
	{
	   for(j=0;j<n;j++)
	  {
		printf("%d ",a[i][j]);
	  }
	  printf("\n");
    }
	printf("Lower traingle elements are:\n");
	for(i=0;i<m;i++)
	{
	   for(j=0;j<=i;j++)
	  {
		printf("%d ",a[i][j]);
	  }
	  printf("\n");
    }
    }
    else{
    	printf("Please enter square matrix");
	}
	return 0;
}
