//sum of individual digit in any digit number
#include<stdio.h>
int main()
{
    int num,a,sum=0;
    a: ;
    printf ("Enter a positive number: ");
    scanf ("%d",&num);
    if (num<=0)
        goto a;
    while (num>0) {
        a=num%10;
        num=num/10;
        sum=sum+a;
    }
    printf ("Sum of individual digits is %d. \n",sum);
    return 0;
}
