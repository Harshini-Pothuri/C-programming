#include<stdio.h>
int main()
{
	char s[100];
	int i,vowel=0,cons=0;
	printf("enter any string :");
	scanf("%[^\n]",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||
		s[i]=='u'||s[i]=='U')
		{
			vowel++;
		}
		else
		{
			cons++;
		}
	}
	printf("Number of vowels in the string is:%d\n",vowel);
	printf("Number of consonants in the string is:%d",cons);
    return 0;
}
