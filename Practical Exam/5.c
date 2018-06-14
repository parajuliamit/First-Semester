#include<stdio.h>
int main()
{
	char C;
	FILE*in=fopen("input.txt","r");
	FILE*out=fopen("out.txt","w");
	C=fgetc(in);
	while (C!=EOF)
	{
		fputc (C,out);
		C=fgetc(in);	
	}
}
