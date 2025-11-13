#include <stdio.h>
int gcd(int a, int b)
{ 
    if(b==0)
    return a;
	else
	return gcd(b,a%b); 
} 
int main() { 
    int a,b,g,x;  
    printf("Enter two numbers: "); 
    scanf("%d %d", &a,&b);
	if(a>b)
	g=gcd(a,b);
	else
	g=gcd(b,a); 
	x=(a*b)/g;
    printf("LCM of %d and %d is %d\n",a,b,x); 
    return 0; 
} 
