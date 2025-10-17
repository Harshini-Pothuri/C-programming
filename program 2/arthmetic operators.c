#include<stdio.h>
int main()
{
	int a,b;
	char n;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	fflush(stdin);
	printf("enter arthmetic operater ");
	scanf("%c",&n);
	switch(n)
	{
	 case'+':printf("addition is %d\n",a+b);
	 break;
	 case'-':printf("subtraction is %d\n",a-b);
	 break;
	 case'*':printf("Multiplication is %d\n",a*b);
	 break;
	 case'/':printf("Division is %d\n",a/b);
	 break;
	 case'%':printf("Modulus is %d\n",a%b);
	 break;
    default:printf("Invalid operator");
    }
	return 0;
}
