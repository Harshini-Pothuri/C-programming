#include <stdio.h>
#include <stdlib.h> // For exit()
int main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1=fopen("file1.txt", "r");
    if (fp1 == NULL)
    {
        printf("File not exit");
        exit (0);
    }
    fp2 = fopen("file2.txt", "w");
    if (fp2 == NULL)
    {
        printf("File not exit");
        exit (0) ;
    }
    while (!feof(fp1))
    {
    	ch=fgetc(fp1);
        fputc(ch, fp2);
    }
    printf("File copied");
    return 0;
}
