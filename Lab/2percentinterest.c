//How many days it will take to get 100000 from 1000 at 2% compound interest
#include <stdio.h>
main()
{
int k=0,i=1000 ,j=1;
while (i<100000) {
i=i+(0.02*i);
k=k+1;
}
printf ("It will take %d days to make 1,00,000\n",k);
}

