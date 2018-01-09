//it reverses number
#include <stdio.h>
int main()
{
    int num,a,reverse=0;
    printf ("Enter a number : ");
    scanf ("%d",&num);
    while (num!=0) {
        a=num%10;
        num=num/10;
        reverse=(reverse*10)+a;
    }
    printf ("The reverse is : %d\n",reverse);
    return 0;
}
