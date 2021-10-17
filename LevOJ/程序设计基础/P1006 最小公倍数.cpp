#include<stdio.h>
int main() 
{
	int n;
	int a,b,i,m;
	scanf("%d",&n);
	while(n--)
	{    
	    scanf("%d%d",&a,&b);
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
	        printf("%d\n",i);
	        break;
	        }
        }
    }
	return 0;
}


