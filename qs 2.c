#include<stdio.h>
#include<string.h>
int main()
{

    FILE *fp;
    char input[1000];
    int inputStatus;
    fp=fopen("qs_2.txt","r");
    fgets(input,1000,fp);

    fclose(fp);
    for(int i=0;i<strlen(input);i++)
    {if(input[i]!=' ')
    printf("%c",input[i]);
    }


return 0;






}
