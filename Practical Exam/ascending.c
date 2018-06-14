#include<stdio.h>
void main()
{
	int ar[100],j,n,i,tmp;
	printf(" Enter the size of the array \t");
	scanf("%d",&n);
	printf("Now enter the elements in the array \t");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("\n Array is - ");
	for(i=0;i<n;i++)
	{
		printf("\t %d",ar[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(ar[i]<ar[j])
			{
			tmp=ar[i];
			ar[i]=ar[j];
			ar[j]=tmp;
			}
		}
	}
	printf("\n\n Array in the ascending order is - \n");
	for(i=0;i<n;i++)
	{
		printf("\t %d",ar[i]);
	}
	printf("\n");
}
