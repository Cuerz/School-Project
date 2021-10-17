#include<stdio.h>
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
	int n,i;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=2;i<n;i++)
		{
			if(judge(i)==1&&(judge(n-i)==1))  
		    break;  
		} 
		printf("%d+%d\n",i,n-i); 			
	 } 
	return 0;
}
