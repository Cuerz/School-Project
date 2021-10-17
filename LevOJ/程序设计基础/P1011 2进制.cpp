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
			j+=a%2*k;
		    a=a/2;   
	    }	
	    printf("%d\n",j);
	}
	return 0;
 } 
