#include<stdio.h>
int get_winer(int arr[][]);

int main()
{


}
int get_winer(int arr[][])
{
    if(arr[0][0]=='O' && arr[0][1]=='O' && arr[0][2]=='O' ||
       arr[1][0]=='O' && arr[1][1]=='O' && arr[1][2]=='O' ||
       arr[2][0]=='O' && arr[2][1]=='O' && arr[2][2]=='O')
        return 0;
   else if(arr[0][0]=='X' && arr[0][1]=='X' && arr[0][2]=='X' ||
       arr[1][0]=='X' && arr[1][1]=='X' && arr[1][2]=='X' ||
       arr[2][0]=='X' && arr[2][1]=='X' && arr[2][2]=='X')
       return 1;


   else if(arr[0][0]=='O' && arr[1][0]=='O' && arr[2][0]=='O' ||
       arr[0][1]=='O' && arr[1][1]=='O' && arr[2][1]=='O' ||
       arr[0][2]=='O' && arr[1][2]=='O' && arr[2][2]=='O')
        return 0;
   else  if(arr[0][0]=='X' && arr[1][0]=='X' && arr[2][0]=='X' ||
       arr[0][1]=='X' && arr[1][1]=='X' && arr[2][1]=='X' ||
       arr[0][2]=='X' && arr[1][2]=='X' && arr[2][2]=='X')
       return 1;

   else  if(arr[0][0]=='O' && arr[1][1]=='O'&& arr[2][2]=='O' ||
            arr[2][0]=='O' && arr[1][1]=='O'&& arr[0][2]=='O')
      return 0;
   else  if(arr[0][0]=='X' && arr[1][1]=='X'&& arr[2][2]=='X' ||
            arr[2][0]=='X' && arr[1][1]=='X'&& arr[0][2]=='X')
      return 1;
   else
    return 2;


}
