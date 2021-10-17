#include<stdio.h>
int zx(int a,int b)
{
	int i,m;
    if(a<b)
	{
		m=a;
		a=b;
		b=m;
	}
	for(i=a;;i++)
	{
		if(i%a==0&&i%b==0)
		{
			return i;
			break;	
		}
	}
}
int zd(int a,int b)
{
	int r;
	do
	{	
		r=a%b;
		a=b;
		b=r;
	}while(r!=0);
	return a;
}
int main()
{
	int a,b,c,d;
	while(~scanf("%d%d%d%d",&a,&b,&c,&d))
	{
		int m,n,k;
		n=zx(b,d);
		a=n/b*a;
		c=n/d*c;
		m=a+c;
		k=zd(m,n);
		m=m/k;
		n=n/k;
		printf("%d/%d\n",m,n);
	}
	return 0;
 } 
