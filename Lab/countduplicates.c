#include<stdio.h>
int main()
{
	int num[10], i,j,dupli=0,duplicates[10],k=0,l,found = 0;
	printf("Enter 10 numbers:\n");
	for (i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	for (i=0;i<10;i++)
	{
		for (j=0;j<i;j++)
		{
			if (num[i]==num[j])
			{
			
				for(l = 0; l < k;l++){
					if(num[i] == duplicates[l]) found = 1;
				}
				if(found == 0){
					dupli++; duplicates[k] = num[i];k++; found = 0;
				}
				
			}
		}
	}
	printf("Total Duplicates is %d. \n",dupli);
	return 0;
}
