#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,total;
	float avg;
	printf("enter s1,s2,s3,s4,s5 values");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	total=s1+s2+s3+s4+s5;
	avg=(float)total/5.0;
	printf("total is %d\n",total);
	printf("Average is %f",avg);
	return 0;
}
