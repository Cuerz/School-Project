#include<stdio.h>
int main(){
	int M;
	double rate=1+(0.0171/12);
	while(~scanf("%d",&M)){
		double saving=0;
		int i=48;
		while(i--){
			saving+=M;
			saving/=rate;
		}
		printf("%.2f\n",saving);
	}
	return 0;
}
