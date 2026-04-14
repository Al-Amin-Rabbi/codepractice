#include<stdio.h>
#include<string.h>
int main ()
{   printf("Concatenate Two Strings Manually \n");
    printf("-------------------------------------\n");
    int ind,m;
    char str1[100];
    char str2[100];
    char str3[200];
    printf("Input the first string : ");
    gets(str1);
    printf("Input the second string : ");
    gets(str2);
    ind=strlen(str1);
    m=strlen(str2);
    for(int i=0; i<ind; i++)
    {
        str3[i]=str1[i];

    }
    str3[ind]=' ';
    for(int i=0;i<m;i++)
    {
        str3[++ind]=str2[i];

    }
    printf("After concatenation the string is :\n %s",str3);
    return 0;


}
