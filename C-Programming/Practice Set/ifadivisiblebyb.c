//Find if first no. is divisible by second
#include<stdio.h>
int main()
{
    int a,b;
    printf ("Enter 2 numbers a and b:");
    scanf ("%d %d",&a,&b);
    if (a%b==0) {
        printf ("%d is divisible by %d.\n",a,b);
    }else printf ("%d is not divisible by %d.\n",a,b);
    return 0;
}
