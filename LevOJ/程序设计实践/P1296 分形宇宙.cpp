#include<bits/stdc++.h>
using namespace std;
char maze[3000][3000];
void fra(int n,int x,int y){
	if(n==1){
		maze[x][y]='X';
	}
	else{
		int size=pow(3,n-2);
		fra(n-1,x,y);
		fra(n-1,x,y+2*size);
		fra(n-1,x+size,y+size);
		fra(n-1,x+2*size,y);
		fra(n-1,x+2*size,y+2*size);
	}
}
int main(){
	int n;
	while(~scanf("%d",&n)){
		int size=pow(3,n-1);
		for(int i=0;i<=size;i++){
			for(int j=0;j<=size;j++)
				maze[i][j]=' ';
		}
		fra(n,1,1);
		for(int i=1;i<=size;i++){
			for(int j=1;j<=size;j++){
				printf("%c",maze[i][j]);
			}
			printf("\n");
		}
		printf("-\n");
	}
}
