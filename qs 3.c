#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000]="It is a string with the smallest and largest word";
    char word[100][100],s[100],l[100];
    int row=0,col=0,i;
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]!=' '&& str[i]!='\0')
        {
            word[row][col]=str[i];
            col++;
        }
        else
        {
            word[row][col]='\0';
            row++;
            col=0;
        }
    }
  //  int i;
 //   for(i=0; i<=row; i++)
    //{

      // printf("%s",word[i]);
      //  printf("\n");
   // }

    strcpy(s,word[0]);
    strcpy(l,word[0]);

    for(i=1; i<=row; i++)
    {
        if(strlen(s)>strlen(word[i]))
        {
            strcpy(s,word[i]);
        }

        if(strlen(l)<strlen(word[i]))
        {
            strcpy(l,word[i]);
        }
    }

    printf("The smallest word is: %s\n",s);
    printf("The largest word is: %s\n",l);
    printf("in the string:'%s'",str);

    return 0;

}
