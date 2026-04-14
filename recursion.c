#include <stdio.h>
void sums(int);
void printnum(num);

void main()
{

    int sum;
    int num;
    scanf("%d",&num);
    sums(num);


}
void sums(int num)
{
    if(num/10==0)
    printnum(num);
    else
    {sums(num/10);
    num=num%10;
    printnum(num);
    }

}
void printnum(int num)
{
    if (num==9)
        printf("Nine ");
    else if(num==8)
        printf("Eight ");
    else if(num==7)
        printf("Seven ");
    else if(num==6)
        printf("Six ");
    else if(num==5)
        printf("Five ");
    else if(num==4)
        printf("Four ");
    else if(num==3)
        printf("Three ");
    else if(num==2)
        printf("Two ");
    else if(num==1)
        printf("One ");
    else if(num==0)
        printf("Zero ");
   }
