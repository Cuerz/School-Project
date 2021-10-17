#include<stdio.h>
int main(){
	int n;
	int max,min;
	while(~scanf("%d",&n)){
		int G[n];
		for(int i=0;i<n;i++)
			scanf("%d",&G[i]);
		max=min=G[0];
		for(int i=1;i<n;i++){
			if(G[i]>max)
				max=G[i];
			if(G[i]<min)
				min=G[i];
			}
			printf("%d %d\n",max,min);
		}
	return 0;
}
