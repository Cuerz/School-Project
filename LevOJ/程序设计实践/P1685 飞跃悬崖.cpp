#include<stdio.h>
int main(){
	long long int a[42];
	a[1]=3;
	a[2]=9;
	for(int i=3;i<42;i++)
		a[i]=a[i-1]*2+a[i-2];
	int n;
	while(~scanf("%d",&n)){
		printf("%lld\n",a[n]);
	}
	return 0;
}
