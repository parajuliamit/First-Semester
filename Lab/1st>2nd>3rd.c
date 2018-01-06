//Total three digits nos. such that first digit greater than second which is greater than third
#include<stdio.h>
int main()
{
    int total=0, i, first,second,third;
    for (i=100;i<=999;i++) {
        first= i/100;
        second= (i/10)%10;
        third=i%10;
        if ((first>second) && (second>third))
            total++;
    }
    printf ("%d\n",total);
    return 0;
}
