#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i;
		for(i=2;i<=n-1;i++)   
	    {
		    if(n%i==0) 
	        break;
	    }
	        if(i<n)
			printf("No\n");
			else printf("Yes\n");   
	} 
	return 0;
 } 
