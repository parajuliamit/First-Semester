#include<stdio.h>
int main()
{
	int A,B;
	printf("Enter integers A and B:\n");
	scanf("%d %d",&A,&B);
	if (A%B==0)
	{
		printf("%d is exactly divisible by %d.",A,B);
	}else printf("%d is not exactly divisible by %d.",A,B);
	return 0;
}
