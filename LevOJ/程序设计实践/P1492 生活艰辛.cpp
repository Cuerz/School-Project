#include<stdio.h>
int main(){
	int N,K;
	while(~scanf("%d%d",&N,&K)){
		int M,saving=0,price=200;
		for(M=0;saving<price;M++){
			saving+=N;
			price+=K;
		}
		if(M<=20)
			printf("%d\n",M);
		else printf("Impossible");
	}
	return 0;
} 
