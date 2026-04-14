#include<stdio.h>
struct student
{

    char name[100];
    int id;

};

int main()
{

    struct student s1[40];
    for(int i=0; i<3; i++)
    {
        scanf("%s",s1[i].name);
        scanf("%d",&s1[i].id);
    }

    for(int i=0; i<3; i++)
    {
        printf("The name of the student %d is: %s\n",i+1,s1[i].name);
        printf("The id of the student %d is: %d\n",i+1,s1[i].id);

    }
    int flag=0;
    char s[100];
    printf("Enter the Id you want to search:");
    scanf("%s",s);

    for(int i=0; i<3; i++)
    {
        if (strcmp(s1[i].name,s)==0)
        {
            printf("The name of the student %d is: %s\n",i+1,s1[i].name);
            printf("The id of the student %d is: %d\n",i+1,s1[i].id);
            flag=1;
        }

        }
        if(flag==0)
            printf("not found");

}
