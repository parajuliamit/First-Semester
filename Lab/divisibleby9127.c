// 6 digit number starting from 100... and divisible by 9127
#include <stdio.h>
main()
{
int i;
for (i=100000;i<=100999;i++){
if (i%9127==0)
printf ("%d\n",i);
}
}

