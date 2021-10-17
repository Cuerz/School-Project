#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int p,q,r,B;
		scanf("%d%d%d",&p,&q,&r);
		for(B=3;B<=16;B++)
		{
			int a=0,b=0,c=0,x,y,z;
			x=p;
			y=q;
			z=r;
			for(int k=1;x!=0;k*=B)
			{
				a+=x%10*k;
				x/=10;
			}
			for(int k=1;y!=0;k*=B)
			{
				b+=y%10*k;
				y/=10;
			}
			for(int k=1;z!=0;k*=B)
			{
				c+=z%10*k;
				z/=10;
			}	
			if(a*b==c)
			{
				printf("%d\n",B);
				break;
			}
			if(B==16)
			printf("0\n");
		}
	}
	return 0;
}
