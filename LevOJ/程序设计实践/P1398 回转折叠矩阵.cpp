#include<stdio.h>
int main(){
	int a[501][501];
	int n;
	while(~scanf("%d",&n)){
		int i,j;
		for(i=1;i<=n;i++){
			if(i%2==0)
				for(j=1;j<=i;j++)
					a[i][j]=i*i+1-j;
		}
		for(j=1;j<=n;j++){
			if(j%2==1)
				for(i=1;i<=j;i++)
					a[i][j]=j*j+1-i;
		}
		for(i=1;i<=n;i++){
			if(i%2==1)
				for(j=i;j>0;j--)
					a[i][j]=a[i][i]+j-i;	
		}	
		for(j=1;j<=n;j++){
			if(j%2==0)
				for(i=j;i>0;i--)
					a[i][j]=a[j][j]+i-j;		
		}
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				if(j==1)	
				printf("%d",a[i][j]);
				else printf(" %d",a[i][j]);
			}
			printf("\n");
		} 
	}
}
