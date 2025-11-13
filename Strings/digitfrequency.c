#include <stdio.h>
#include <string.h>
int main() {
    char n[1024];
    int i,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,k=0,j=0;
    printf("Enter any string:");
    scanf("%[^\n]",&n);
    for(i=0;n[i]!='\0';i++)
    {
        if(n[i]>='0'&&n[i]<='9')
        {
            if(n[i]=='0')
            a++;
           else if(n[i]=='1')
            b++;
           else if(n[i]=='2')
            c++;
           else if(n[i]=='3')
            d++;
           else if(n[i]=='4')
            e++;
           else if(n[i]=='5')
            f++;
           else if(n[i]=='6')
            g++;
            else if(n[i]=='7')
            h++;
            else if(n[i]=='8')
            k++;
           else if(n[i]=='9')
            j++;
        }
    }
    printf("%d %d %d %d %d %d %d %d %d %d ",a,b,c,d,e,f,g,h,k,j);
    return 0;
}

