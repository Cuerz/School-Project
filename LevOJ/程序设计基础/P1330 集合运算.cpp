#include<stdio.h>
int main()
{
	int n,m,k;
	while(~scanf("%d",&n)) 
	{
		int i=0,j=0,x=0,c=0,p;
		int A[n];
		for(i=0;i<n;i++)
			scanf("%d",&A[i]);
			
		scanf("%d",&m);
		int B[m];
		for(j=0;j<m;j++)
			scanf("%d",&B[j]);
		
		int C[1000];
		for(i=0;i<n;i++)
		{
			j=0;
			while(A[i]!=B[j])
			{
				j++;
				if(j==m-1)
				break;
			}
			if(j==m-1) 
			{
				C[x]=A[i];
				x++;
			}
		} 
		for(j=0;j<x;j++) 	
		for(i=0;i<x-j-1;i++)
	  	if (C[i]>C[i+1])
	  	{
	  		p=C[i];
	  		C[i]=C[i+1];
	  		C[i+1]=p;
	   	} 		
		for(i=0;i<x;i++)
		printf("%d ",C[i]);
    	printf("\n");
	}
	return 0;
}
