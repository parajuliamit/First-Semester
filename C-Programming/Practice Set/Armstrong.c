//Find if the number is Armstrong
#include<stdio.h>
int main()
{
    int num,b,a,sum=0;
    a: ;
    printf ("Enter a positive number: ");
    scanf ("%d",&num);
    if (num<=0)
        goto a;
    b=num;
    while (b>0) {
        a=b%10;
        b=b/10;
        sum=sum+(a*a*a);
    }
    if (sum==num) {
    printf ("%d is a Armstrong Number. \n",num);
    }else printf ("%d is not a Armstrong Number. \n",num);
    return 0;
}
