//Find if product of two numbers is 100 or greater
#include<stdio.h>
int main()
{
    float a,b;
    printf ("Enter 2 numbers: ");
    scanf ("%g %g",&a,&b);
    if ((a*b)==100) {
        printf ("%g X %g is 100.\n",a,b);
    }else if ((a*b)>100) {
        printf ("%g X %g is greater than 100.\n",a,b);
    }else printf ("%g X %g is less than 100.\n",a,b);

    return 0;
}
