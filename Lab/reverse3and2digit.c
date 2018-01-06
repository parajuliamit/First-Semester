//it reverses both 2 and 3 digit numbers
#include <stdio.h>
int main()
{
    int num,first,second,third,reverse;
    re: ;
    printf ("Enter a two or three digit number:");
    scanf ("%d",&num);
    if ((num<10 && num>-10) || num>999 || num<-999){
        printf (":Error: 2 or 3 digit number expected. :/\n");
        goto re;
    }
    first=num/100;
    second=(num/10)%10;
    third=num%10;
    if (num>99){
    reverse=third*100+second*10+first;
    }else reverse=third*10+second;
    printf ("The reverse is \t \t \t:%d\n",reverse);
    return 0;
}
