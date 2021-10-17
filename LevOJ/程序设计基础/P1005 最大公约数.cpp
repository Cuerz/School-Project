#include<stdio.h>
int main() 
{
	int n;
	scanf("%d\n",&n);
	while(n--)
	{   int a,b,r; 
	    scanf("%d%d",&a,&b);
	do
	{
		
		r=a%b;
		a=b;
		b=r;
	}while(r!=0);
	printf("%d\n",a);
} 
	return 0;
}
