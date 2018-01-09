//Find if entered three numbers can be regarded as sides of triangle
#include<stdio.h>
int main()
{
    int a,b,c;
    printf ("Enter 3 positive integers a,b and c: ");
    scanf ("%d %d %d",&a,&b,&c);
    if ((a+b)>c && (b+c)>a && (a+c)>b) {
        printf ("They can be sides of triangle.");
    }else printf ("They don't form valid triangle.");

    return 0;
}
