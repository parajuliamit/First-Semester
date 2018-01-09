//Play with the number until it reaches 1
#include<stdio.h>
int main()
{
    int a,b,c;
    a: ;
    printf ("Enter 1 positive integer: ");
    scanf ("%d",&a);
    if (a<=0)
        goto a;
    printf ("%d \n",a);
    while (a>1) { //loop execute until we get 1
        if (a%2==0) { //if positive, number is made half
            b=a/2;
            printf ("%d (%d / 2)\n",b,a);
            a=b;
        }else if (a%2==1) { //if negative, number is multiplied by 3 and then added 1 
        b=a*3 +1;
        printf ("%d (%d X 3 +1)\n",b,a);
        a=b;
        }
    }
    return 0;
}
