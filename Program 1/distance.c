#include<stdio.h>
int main()
{
	float s,t,d;
	printf("enter s value in kmph");
	scanf("%f",&s);
	printf("enter t vale in min");
	scanf("%f",&t);
	d=s*t/60;
	printf("distance is %fkm",d);
	return 0;
}
