//Remove 1st letter of 2 digit number and get 7 times it as the original number
#include <stdio.h>
main ()
{
int i,j;
for (i=10; i<=99; i++) {
j=i%10;
if (i/7.0==j)
printf ("%d\n",i);
}
}

