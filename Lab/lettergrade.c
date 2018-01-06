//Taking number as input and printing letter grade as output
#include<stdio.h>
int main()
{
    int number;
    printf("Enter numerical grade:89");
    scanf("%d",&number);
    printf("Letter Grade: ");
    if ((number>100) || (number<0)) {
        printf("Out of Range :Error:");
    }else if(number>=90){
        printf("A");
    }else if (number>=80) {
        printf("B");
    }else if (number>=70) {
        printf("C");
    }else if (number>=60) {
        printf("D");
    }else if (number>=0) {
        printf("F");
    }
    return 0;
    }
