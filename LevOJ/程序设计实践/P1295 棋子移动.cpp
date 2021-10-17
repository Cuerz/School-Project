#include<stdio.h>
int n,k=0;
void pr(int i){
	printf("%d,%d-->%d,%d\n",i,i+1,k,k+1);
	k=i;
}
void move(int s){
	if(s==4){
		pr(4);
		pr(8);
		pr(2);
		pr(7);
		pr(1);
	}
	else{
		pr(s);
		pr(2*s-1);
		move(s-1);
	}
}
int main(){
	scanf("%d",&n);
	k=2*n+1;
	move(n);
	return 0;
}
