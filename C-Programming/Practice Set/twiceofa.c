//Find if product of two numbers is greater than twice of first
#include<stdio.h>
int main()
{
    float a,b;
    printf ("Enter 2 numbers a and b: ");
    scanf ("%g %g",&a,&b);
    if ((a*b)>(2*a)) {
        printf ("%g X %g is greater than twice of %g.\n",a,b,a);
    }else printf ("%g X %g is not greater than twice of %g.\n",a,b,a);

    return 0;
}
