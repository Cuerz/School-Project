#include<iostream>
using namespace std;
int main(){
	int t,b,n;
	cin>>t;
	while(t--){
		cin>>b;
		n=1;
		while(b>n){
			b-=n;
			n++;
		}
		if(b%9==0)
			cout<<9<<endl;
		else cout<<b%9<<endl;
	}
	return 0;
}
