#include<stdio.h>
#include<string.h>
void main()
{
	char string1[50],string2[50];
	int diff;
	printf ("Enter two strings to compare:\n");
	scanf("%s",string1);
	scanf("%s",string2);
	diff=strcmp(string1,string2);
	if (diff>0)
	{
		printf("%s is greater than %s by %d.\n",string1,string2,diff);
	}else if (diff<0)
	{
		printf("%s is greater than %s by %d.\n",string2,string1,-diff);
	}else printf ("%s and %s are same.\n",string1,string2);
}
