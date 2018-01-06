//Findind total nos. from 0 to 999 with at least one 7 
#include<stdio.h>
int main()
{
    int total=0, i, first,second,third;
    for (i=0;i<=999;i++) {
        first= i/100;
        second= (i/10)%10;
        third=i%10;
        if (first==7 || second==7 || third==7)
            total++;
    }
    printf ("%d\n",total);
    return 0;
}
