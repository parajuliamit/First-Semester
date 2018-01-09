//sum of individual digit in 3 digit number
#include<stdio.h>
int main()
{
    int num,first,second,third,sum;
    a: ;
    printf ("Enter 3 digit number: ");
    scanf ("%d",&num);
    if ((num<100) || (num>999))
        goto a;
    first=num/100;
    second=(num/10)%10;
    third=(num%10);
    sum=first+second+third;
    printf ("Sum of individual digits of %d is %d. \n",num,sum);
    return 0;
}
