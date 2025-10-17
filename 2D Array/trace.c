#include<stdio.h>
int main()
{
	int a[20][20],n,m,i,j,t=0;
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
	printf("Matrix form is:\n");
	for(i=0;i<m;i++)
	{
	   for(j=0;j<n;j++)
	  {
		printf("%d ",a[i][j]);
	  }
	  printf("\n");
    }
    for(i=0;i<m;i++)
	{
	   for(j=0;j<n;j++)
	  {
	  	if(i==j)
	  	t=t+a[i][j];
	  }
    }
    printf("Trace is %d ",t);
    }
    else{
    	printf("Please enter square matrix");
	}
	return 0;
}
