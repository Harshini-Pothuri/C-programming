#include<stdio.h>
int main()
{
	int a[20][20],n,m,i,j,b[20][20];
	int p,q,c[20][20];
    printf("Enter no.of rows and no.of columns of A:\n");
    scanf("%d %d",&m,&n);
    printf("Enter no.of rows and no.of columns of B:\n");
    scanf("%d %d",&p,&q);
    if(m==n&&p==q)
    {
	printf("Enter %d elements into A:\n",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter %d elements into B:\n",p*q);
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
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
    printf("Matrix form of B is:\n");
    for(i=0;i<p;i++)
	{
	   for(j=0;j<q;j++)
	  {
		printf("%d ",b[i][j]);
	  }
	  printf("\n");
    }
    for(i=0;i<m;i++)
	{
	   for(j=0;j<n;j++)
	  {
		c[i][j]=a[i][j]+b[i][j];
	  }
    }
    printf("Matrix addition is:\n");
    for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
    }
    else{
    	printf("Please enter square matrix");
	}
	return 0;
}
