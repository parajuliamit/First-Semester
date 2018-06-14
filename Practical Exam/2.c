#include<stdio.h>
int main()
{
	float radius;
	float volume;
	printf("Enter radius of sphere:");
	scanf("%g",&radius);
	volume= ((4.0/3)*(22.0/7)*(radius*radius*radius));
	printf("Volume of sphere with radius %g is %g.\n",radius,volume);
	return 0;
}

