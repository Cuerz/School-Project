#include<stdio.h>
int main()
{
	int m,n,a,b;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		if(n>=2*m&&n<=4*m&&n%2==0) 
		{
		    a=(4*m-n)/2;
		    b=(n-2*m)/2;
		    printf("%d %d\n",a,b);
	    }
	    else
	    {
			a=-1;
			b=-1;
			printf("%d %d\n",a,b);
	    }
	 } 
	 return 0;
 } 
