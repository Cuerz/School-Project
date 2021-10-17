#include<stdio.h>
int main()
{
	int a;
	while(scanf("%d",&a)!=EOF)
	{ 
		int i=7;
		int s[8]={0};
		if(a>=0)
		{
		    s[0]=0;
			for(;a!=0;i--)
			{
				s[i]=a%2;
			    a=a/2; 
		    }
		}
	    else 
		{
			s[0]=1;
			a=-a;
			for(;a!=0;i--)
				{
					s[i]=a%2;
				    a=a/2; 
			    }
		}
	    for(i=0;i<=7;i++)
	    printf("%d",s[i]);
	    printf("\n");
	}
	return 0;
}
