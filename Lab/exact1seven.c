//total numbers upto 999 that contains only one 7
#include <stdio.h>
main ()
{
	int i,j,k,l,m=0;
	for (i=0;i<=999;i++) {
		j=i/100;
		k=(i/10)%10;
		l=i%10;
		if (j==7 && k!=7 && l!=7) {
		m=m+1;
		} else if(k==7 && j!=7 && l!=7) {
		m=m+1;
		} else if(l==7 && j!=7 && k!=7) {
		m=m+1;
		}
	}
	printf ("%d\n",m);
}
  
