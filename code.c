#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
  printf("The factors of %d are: ",a);
  for(int i=1;i<a;i++){
    if(a%i==0){
        printf("%d, ",i);
    }
  }
  printf("%d.",a);
  return 0;
}
