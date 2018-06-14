#include<stdio.h>
struct student
{
	char name[50];
	int roll;
	char grade;
};

int main()
{	struct student data;
	printf("Enter name of student:\n");
	scanf("%s",data.name);
	printf("Enter roll no.\n");
	scanf("%d",&data.roll);
	printf("Enter grade:\n");
	scanf("%c",&data.grade);
}
