#include<stdio.h>
int main()
{
  char s[100],r[100];
  int len,i,j,flag=1;
  s[100]=r[100];
  printf("Enter any string:");
  scanf("%[^\n]",s);
  len=0;
  for(i=0;s[i]!='\0';i++)
  {
  	len++;
  }	
  printf("Length of the  string is:%d\n",len);
   j=0;
   for(i=len-1;i>=0;i--)
   {
   	r[j]=s[i];
   	j++;
   }
   r[j]='\0';
   printf("The reverse string is: %s\n",r);
   for(i=0;i<len;i++)
   {
   	if(r[i]!=s[i]){
	flag=0;
	break;}
   }
   if(flag==1)
   {
   	printf("Given string is palindrome");
   }
   else
   {
   	printf("Given string is not a palindrome");
   }
   return 0;
}
