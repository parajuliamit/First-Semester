#include<stdio.h>
#include<string.h>
void main()
{
	char string1[50],string2[50];
	printf("Enter strings to concatenate: \n");
	scanf ("%s",string1);
	scanf ("%s",string2);
	strcat (string1,string2);
	printf ("The concatenated string is: %s.\n",string1);	
}
