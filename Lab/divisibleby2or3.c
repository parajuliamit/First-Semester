//nos. from 1 to 50 divisible by 2 or 3
#include <stdio.h>
main()
{
int i,j=0;
for (i=1; i<=50; i++) {
if (i%2==0 || i%3==0) {
printf ("%d\n",i);
j=j+1;
}
}
printf ("%d\n",j);
} 
