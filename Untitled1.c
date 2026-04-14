#include<stdio.h>
int main()
{
 int t,a,b,i;
 scanf("%d",&t);
 for(i=0;i<t;i++){
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf(">");
    }
    else if(a<b)
    {
        printf("<");
    }
    else
    {
        printf("=");
    }
    printf("\n");
 }
   return 0;
}
