#include<stdio.h>
int main()
{
    int a[20][20],n,m,i,j,transpose[20][20];
    printf("Enter no.of rows and no.of columns:");
    scanf("%d %d",&m,&n);
	printf("Enter %d elements:\n",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
    for(i=0; i<m; i++) {
        for(j=0;j<n; j++) {
            transpose[j][i] = a[i][j];
        }
    }
    printf("Transposed Matrix:\n");
    for(i=0; i<m; i++)
	 {
        for(j=0; j<n; j++) 
		{
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
