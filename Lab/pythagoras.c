//Finding pythagoras triplet form 1 to 100
#include <stdio.h>
main ()
{
int a,b,c;
for (a=1;a<=100;a++) {
for (b=1;b<=100;b++) {
for (c=1;c<=100;c++) {
if (a*a+b*b==c*c){
printf ("%d X %d + %d X %d = %d X %d \n",a,a,b,b,c,c);
}
}
}
}
}
