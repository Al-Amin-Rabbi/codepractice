#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char grade(int mark);
int main()
{
    int mark;
    scanf("%d",&mark);
    printf("%c",grade(mark));
}
char grade(int mark){
    char grad;
    if(mark<=39)
    grad='F';
    else if(mark<=59)
    grad='C';
    else if(mark<=79)
    grad='B';
    else 
    grad='A';
    
    return grad;
}
  