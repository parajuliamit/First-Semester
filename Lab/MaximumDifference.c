#include<stdio.h>
int main()
{
	int num[5], i,j,maxdiff,diff;
	printf("Enter 5 numbers:");
	for (i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
	}
	for (i=4;i>=0;i--)
	{
		for (j=0;j<i;j++)
		{
		 diff= num[i]-num[j];
		 if (i==4 && j==0) maxdiff=diff;
		 if (diff>maxdiff) maxdiff=diff;
		}
	}
	printf("Max. Difference=%d\n",maxdiff);
		
	return 0;
}
