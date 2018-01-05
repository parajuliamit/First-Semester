//Input 2 digit number and print its text form like 11 as Eleven
#include<stdio.h>
main()
{
	int num,last;
	printf ("Enter 2 digit number\n");
	scanf ("%d",&num);
	if (num<20) 
	{
		if (num==10)
		printf ("Ten\n");
		if (num==11)
		printf ("Eleven\n");
		if (num==12)
		printf ("Twelve\n");
		if (num==13)
		printf ("Thirteen\n");	
		if (num==14)
		printf ("Fourteen\n");
		if (num==15)
		printf ("Fifteen\n");
		if (num==16)
		printf ("Sixteen\n");
		if (num==17)
		printf ("Seventeen\n");
		if (num==18)
		printf ("Eighteen\n");
		if (num==19)
		printf ("Nineteen\n");
	}else if (num>=20 && num<30)
		printf ("Twenty ");
	else if (num>=30 && num<40)
		printf ("Thirty ");
	else if (num>=40 && num<50)
		printf ("Forty ");
	else if (num>=50 && num<60)
		printf ("Fifty ");		
	else if (num>=60 && num<70)
		printf ("Sixty ");
	else if (num>=70 && num<80)
		printf ("Seventy ");
	else if (num>=80 && num<90)
		printf ("Eighty ");
	else if (num>=90 && num<100)
		printf ("Ninety ");
	
	if (num>20 && num<100)
	{
		last = num%10;
		if (last==1)
		printf ("One\n");		
		if (last==2)
		printf ("Two\n");
		if (last==3)
		printf ("Three\n");
		if (last==4)
		printf ("Four\n");
		if (last==5)
		printf ("Five\n");
		if (last==6)
		printf ("Six\n");
		if (last==7)
		printf ("Seven\n");
		if (last==8)
		printf ("Eight\n");
		if (last==9)
		printf ("Nine\n");
	}
  }
