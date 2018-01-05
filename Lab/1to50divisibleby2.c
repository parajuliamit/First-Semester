//Even no. form 1 to 50
#include <stdio.h>
main()
{
int i,j=0;
	for (i=1; i<=50; i++) {
	if (i % 2 == 0) {
	j+=1 ;
	}
	}
	printf ("Total numbers divisible by 2 from 1 to 50 are %d\n",j);
	
}
