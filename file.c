#include<stdio.h>
#include<string.h>
typedef struct
{

    char name[100];
    int id;

} student;

int main()
{
    int n;
    student s[10];
    FILE *fp;
    fp=fopen("hello.txt","r");
    fscanf(fp,"%d",&n);

    for(int i=0; i<n; i++)
     {
        fscanf(fp,"%s %d",s[i].name,&s[i].id);
        }

    fclose(fp);
  /*   for(int i=0; i<n; i++)
    {
        printf("%s %d\n",s[i].name,s[i].id);
    }
*/
    printf("Enter the new student name and id: ");
    scanf("%s %d",s[n].name,&s[n].id);
    n++;
    fp=fopen("hello.txt","w");
    fprintf(fp,"%d\n",n);
      for(int i=0; i<n; i++)
    {

        fprintf(fp,"%s %d\n",s[i].name,s[i].id);
    }

  fclose(fp);


}



