#include<stdio.h>
int fun(int m,int n){
	if(m==0||n==1)
		return 1;
	else if(m<n)
		return fun(m,m);
	else return fun(m,n-1)+fun(m-n,n);
}
int main(){
	int m,n;
	while(~scanf("%d%d",&m,&n)){
		printf("%d\n",fun(m,n));
	}
}
