#include<stdio.h>
int prime(int);
int main()
{  
    int flag=0,n,x;
    printf("enter n value:");
    scanf("%d",&n);
    prime(n);
    return 0;
}
    int prime(int n)
	{
    	int i,flag=0,x;
        for(i=1;i<n;i++)
        {
		if(n%i==0)
		flag=1;
        break;
       }
       if(flag==0)
       printf("prime number");
       else
	   printf("Not a prime number");
      return x;
  }
