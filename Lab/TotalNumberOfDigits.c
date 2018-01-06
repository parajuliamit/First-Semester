//Count the number of digits in entered number
#include <stdio.h>
int main()
{
    long int num,digit=0,rem;
    printf("Enter a number:");
    scanf("%ld",&num);
    rem=num;
    if (num>-10 && num<10)
        printf("The number %ld has 1 digit.\n",num); /*extra condition only to make grammar correct for digit and digits.*/
    else {
    while (rem!=0) {
        rem=rem/10;
        digit++;
    }
    printf("The number %ld has %ld digits.\n",num,digit);
    }
    return 0;
}
