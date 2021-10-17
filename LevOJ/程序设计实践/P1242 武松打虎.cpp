#include<stdio.h>
int main(){
	long int n,t;
	while(~scanf("%ld%ld",&n,&t)){
		long int m,c=0,sum=0;
		long int a[n];
		for(int i=0;i<n;i++){
			scanf("%ld",&a[i]);
		}
		for(int j=0;j<n;j++)
			for(int i=0;i<n-j-1;i++)
	  			if (a[i]>a[i+1]){
				  	m=a[i];
				  	a[i]=a[i+1];
				  	a[i+1]=m;
				}
		for(int i=0;i<n;i++){
			sum+=a[i];
			if(sum<=t)
				c++;
			else break;
		}
		printf("%ld\n",c);
	}
	return 0;
} 
