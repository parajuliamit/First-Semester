//This program reverses the 2 digit numbers eg. 67 to 76
#include <stdio.h>
int main()
{
    int num,first,second;
    re: ;
    printf ("Enter a two-digit number:");
    scanf ("%d",&num);
    if ((num<10 && num>-101) || num>99){
        printf (":Error: Two digit number expected. :/\n");
        goto re;
    }
    first=num/10;
    second=num%10;
    printf ("The reverse is \t\t:%d%d\n",second,first);
    return 0;
}
