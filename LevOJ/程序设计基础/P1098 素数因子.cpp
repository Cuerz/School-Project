#include <stdio.h>
#include<math.h>
int judge(int b)
{   
    int a;
    for(a=2;a<=b-1;a++)   
	{
		if(b%a==0) 
	    break;
	}
	    if(a<b)
		return 0;
		else return 1; 
 } 
int main()
{
	int n;
	int i;
	while(scanf("%d",&n)!=EOF)
	{
			for(i=2;i<=n;i++)
			{
				while(n%i==0)
				{
                	n/=i;
			      	if(judge(i)==1)
					printf("%d ",i);
				}
				
			}
	}
	return 0;
}
