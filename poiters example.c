#include<stdio.h>
int main()
{
   int*ptr,y=456;
   ptr=&y;
   printf("%d\n",*&*&*ptr);
   return 0;
}
