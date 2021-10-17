#include <stdio.h>
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
	scanf("%d",&n);
	while(n--)
	{
		int a,s,m,t=0;
		scanf("%d",&a);
		m=a;
		while(a!=0)
		{
		    s=a%10;
	        t=t*10+s;
	        a/=10;
	    }
	    if(judge(m)==1&&judge(t)==1)
	    printf("1\n");
	    else printf("0\n");		
	}
	return 0;
}
