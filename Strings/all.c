#include<stdio.h>
int main()
{
	char s1[100];
	int alpha=0,upper=0,lower=0,vowel=0;
	int i,cons=0,digit=0,space=0,sp=0;
	printf("Enter a String:");
	scanf("%[^\n]",s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>='A'&&s1[i]<='Z'||s1[i]>='a'&&s1[i]<='z')
		{
			alpha++;
		if(s1[i]>='A'&&s1[i]<='Z')
		{
			upper++;
		}
		if(s1[i]>='a'&&s1[i]<='z')
		{
			lower++;
		}
		switch(s1[i])
		{
			case'a':case'A':
			case'e':case'E':
			case'i':case'I':
			case'o':case'O':
			case'u':case'U':
			vowel++;
			break;
			default:
				cons++;
			}
		}
			else if(s1[i]>='0'&&s1[i]<='9')
			{
				digit++;
			}
			else if(s1[i]==' ')
			{
				space++;
			}
			else
			{
				sp++;
			}
		}
			printf("No.of Alphabets:%d\n",alpha);
			printf("No.of upper letters:%d\n",upper);
			printf("No.of lower letters: %d\n",lower);
			printf("No.of vowels: %d\n",vowel);
			printf("No.of consonants: %d\n",cons);
			printf("No.of digits: %d\n",digit);
			printf("No.of spaces: %d\n",space);
			printf("No.of special characters: %d\n",sp);
			return 0;
}
