#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a,k,j=0;
		scanf("%d",&a);
		for(k=1;a!=0;k*=10)
		{
			j+=a%8*k;
		    a=a/8;   
	    }	
	    printf("%d\n",j);
	}
	return 0;
 } 
