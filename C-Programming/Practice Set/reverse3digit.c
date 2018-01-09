//it reverses 3 digit numbers
#include <stdio.h>
int main()
{
    int num,first,second,third,reverse;
    re: ;
    printf ("Enter a three digit number:");
    scanf ("%d",&num);
    if (num>999 || num<100){
        printf (":Error: 3 digit number expected. :/\n");
        goto re;
    }
    first=num/100;
    second=(num/10)%10;
    third=num%10;
    reverse=third*100+second*10+first;
    printf ("The reverse is \t \t:%d\n",reverse);
    return 0;
}
