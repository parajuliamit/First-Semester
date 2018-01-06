//Total positive numbers below 1000 whose sum of digits is 9
#include<stdio.h>
int main()
{
    int total=0, i, first,second,third;
    for (i=999;i>0;i--) {
        first= i/100;
        second= (i/10)%10;
        third=i%10;
        if ((first+second+third)==9)
            total++;
    }
    printf ("%d\n",total);
    return 0;
}
