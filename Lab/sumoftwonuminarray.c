#include<stdio.h>
int main()
{
	int num[5],i,j,finalsum,sum;
	printf ("Enter five numbers:");
	for (i=0;i<5;i++)
	scanf ("%d",&num[i]);
	printf ("Enter the sum you need:");
	scanf ("%d",&finalsum);
	for (i=0;i<5;i++)
	 {
	 	for (j=0; j<=i;j++)
		{
			sum=num[i]+num[j];
			if (finalsum==sum)
			{
				printf ("%d + %d = %d \n",num[i],num[j],finalsum);
			}	
	 	}
	 }
	return 0;
}
