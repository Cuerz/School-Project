#include<stdio.h>
int main(){
	int n;
	while(~scanf("%d",&n)){
		for(int i=1;;i++){
			if(i*i<=n)
				printf("%d ",i*i);
			else break;	
		}
		printf("\n");
	}
	return 0;
}

