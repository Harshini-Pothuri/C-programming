#include<stdio.h>
int prime(int);
int main()
{  
    int flag,n,A;
    printf("enter n value:");
    scanf("%d",&n);
     prime(n);
    return 0;
}
    int prime(int n)
	{
    	int i,flag=0,x;
        for(i=2;i<n;i++)
        {
		if(n%i==0)
		flag=1;
        break;
       }
       if(flag==0)
       printf("Given number is a prime number");
       else
	   printf("Given number is not a prime number");
      return x;
  }
