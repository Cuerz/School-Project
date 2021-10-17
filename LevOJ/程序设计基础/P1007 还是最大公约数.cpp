#include<stdio.h>
int main() 
{
	int n;
	int a,b,c,r,m;
	scanf("%d\n",&n);
	while(n--)
	{    
	    scanf("%d%d%d",&a,&b,&c);
	    do
	    {
	    	r=a%b;
	    	a=b;
	    	b=r; 
		}while(r!=0);
		do
	    {
	    	m=a%c;
	    	a=c;
	    	c=m; 
		}while(m!=0);
		printf("%d\n",a);
    }
	return 0;
}

