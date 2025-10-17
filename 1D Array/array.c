#include<stdio.h>
int main()
{
	int i,arr[5]={2,5,6,4,8};
	for(i=0;i<5;i++)
	{
	printf("%d %u\n",arr[4],&arr[i]);
    }
	return 0;
}
