//three digits number with remainder 1 when divided by 2,3,4,5,6,7
#include<stdio.h>
main()
{
int i;
for (i=100; i<=999; i++) {
if (i%2==1 && i%3==1 && i%4==1 && i%5==1 && i%6==1 && i%7==1){
printf ("%d\n",i);
}
}
}
