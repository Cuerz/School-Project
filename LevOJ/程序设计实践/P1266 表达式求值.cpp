#include<stdio.h>
#include<string.h>
int main (){
	int len,i,j;
	char m[201];
    int n[201];
    while(~scanf("%s",m))
	{
    	len=strlen(m);
    	j=len-1;
		for(i=0;i<len;i++){
			n[j]=m[i]-'0';
			j--;
		}
		int k=1,sum=0;
		for(i=0;i<len;i++){
			if(n[i]>=0){
				sum+=+n[i]*k;
				k*=10;
			}
			else k=1;
		}
		printf("%d\n",sum);
	}
	return 0;
}
