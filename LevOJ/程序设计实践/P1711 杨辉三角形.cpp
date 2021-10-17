#include<stdio.h>
int tri[1000][1000];
int main(){
	int n,count=0;
	scanf("%d",&n);
	for(int i=0;i<1000;i++){
		for(int j=0;j<=i;j++){
			if(i==j||j==0)
				tri[i][j]=1;
			else tri[i][j]=tri[i-1][j-1]+tri[i-1][j];
		}
	}
	for(int i=0;i<1000;i++){
		for(int j=0;j<=i;j++){
			count++;
			if(tri[i][j]==n)
			goto end;
		}
	}
	end:
		printf("%d\n",count);
	return 0;
}
