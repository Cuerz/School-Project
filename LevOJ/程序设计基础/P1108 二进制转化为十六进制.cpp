#include<stdio.h>
int main()
{
	int a;
	while(scanf("%d",&a),a!=0)
	{
		int k,j=0;
		for(k=1;a!=0;k*=2)
		{
			j+=a%10*k;
		    a=a/10;   
	    }	
	    printf("%X\n",j);
	}
	return 0;
 } 
