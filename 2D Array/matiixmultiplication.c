#include<stdio.h>
int main()
{
	int a[20][20],n,m,i,j,b[20][20];
	int p,q,c[20][20],k;
    printf("Enter no.of rows and no.of columns of A:\n");
    scanf("%d %d",&m,&n);
    printf("Enter no.of rows and no.of columns of B:\n");
    scanf("%d %d",&p,&q);
    if(n==p)
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
	   for(j=0;j<q;j++)
	  {
	  	c[i][j]=0;
	  	for(k=0;k<n;k++)
	  	{
	  		c[i][j]=c[i][j]+a[i][k]*b[k][j];
		  }
	  }
    }
    printf("Matrix Multiplication is:\n");
    for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
else
{
	printf("Matrix Multiplication not possible");
}
return 0;
}
    
