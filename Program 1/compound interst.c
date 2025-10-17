#include<stdio.h>
int main()
{
    float p,t,r;
	float CI;
	printf("enter p,t,r values");
	scanf("%f%f%f",&p,&t,&r);
	CI=p*(pow(1+r/100,t));
	printf("Compound Interest is %f",CI);
	return 0;
	}
