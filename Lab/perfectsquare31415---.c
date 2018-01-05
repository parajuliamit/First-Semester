//Find n such that n square starts from 31415
#include <stdio.h>
#include <math.h>
int main()
{
	long long int i,j,l;
	float n;
	long int num=31415;
	for (i=10;i>=1;i=i*10)
	{
		for (j=1;j<i;j++) 
		{
			l=num*i +j;
			n=sqrt(l);
			if (pow((long int)n,2)==l) {
				printf ("%f square = %lld\n",n,l);
				goto m;
			}
		}
	}	
	m: ;



	return 0;
}
