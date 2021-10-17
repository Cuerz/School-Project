#include<stdio.h> 
#include<math.h>
int judge(int b)
{
	int i;
	for(i=2;i<=b-1;i++)   
	{
	    if(b%i==0) 
        break;
    }
    if(i<b) return 0;
	else return 1;
}
int main()
{
	int m,n;
	while(~scanf("%d",&m))
	{
		for(n=m;n>0;n--)
		{
			if(judge(n)==1&&judge(n-2)==1) 
        	break;
		}
		printf("%d %d\n",n-2,n);
	 } 
	return 0;
}
