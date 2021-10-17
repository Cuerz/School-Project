#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a,sum=0,maxsum=0;
	while(n--){
		scanf("%d",&a);
		sum+=a;
		if(sum>maxsum)
			maxsum=sum;
		if(sum<0)
			sum=0;
	}
	printf("%d\n",maxsum);
	return 0;
}
