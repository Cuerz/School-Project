#include<stdio.h>
int main()
{
	int a,b,m,n;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
	    m=a/b;
	    n=a%b;
	    printf("%d %d\n",m,n);
	 } 
	 return 0;
 } 
