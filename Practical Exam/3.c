#include<stdio.h>
#include<string.h>
void main()
{
	char sent[100], rev[100];
	int i,j=0,k=0;
	printf ("Enter a sentence:\n");
	gets(sent);
	while (sent[j]!='\0')
	j++;
	for(i=j-1;i>=0;i--)
	{
		rev[k]=sent[i];
		k++;
	}
	printf("Reverse sentence is: %s\n",rev);
}
