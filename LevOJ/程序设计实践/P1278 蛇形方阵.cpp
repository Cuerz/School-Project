#include<stdio.h>
int main(){
	int n;
	while(~scanf("%d",&n)){
		int squ[n][n];
		int c=1;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i%2==0)
					squ[j][i]=c;
				else squ[n-j-1][i]=c;
				c++;
			}
		}	
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
				printf("%d ",squ[i][j]);
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
