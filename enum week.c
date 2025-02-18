#include<stdio.h>
enum week{mon,tue,wed,thur,fri,sat,sun};
int main()
{
    enum week day;
    day=mon;
    printf("%d",day);
    return 0;
}
