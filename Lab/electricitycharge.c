//Program to provide charge of electricity with vat according to the unit entered 
#include<stdio.h>
int main()
{
    float unit,total,charge;
    re: ;
    printf ("Enter total units:");
    scanf ("%g",&unit);
    if (unit<=0) {
        printf (":Error: Enter value greater than 0.\n");
        goto re;
    }
    printf ("Total Amount To Be Paid Inclusive of 15%% VAT is Rs ");
    if (unit<=20) {
        total=80;
    }else if (unit<=100) {
        total=80+(7.5*(unit-20));
    }else if (unit<=200) {
        total=80+(7.5*80)+(8.5*(unit-100));
    }else total=80+(7.5*80)+(8.5*100)+(9.5*(unit-200));

    charge = total + (0.15*total);
    printf ("%g\n",charge);
    return 0;
}
