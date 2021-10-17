#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	long long n;
	while(scanf("%lld",&n)!=EOF){
		long long hh=n/1000/60/60%24;
		long long mm=n/1000/60%60;
		long long ss=n/1000%60;
		printf("%02lld:%02lld:%02lld\n",hh,mm,ss);
	}
}
