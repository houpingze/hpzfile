#include<iostream>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m;
int main(){
	cin>>n;
	if(n<10000){
		cout<<n/25<<' '<<0<<endl<<n%25;
	}else if(n<100000){
		int a=int(n*0.3)/25,b=int(n*0.7)/40;
		cout<<a<<' '<<b<<endl<<n-a*25-b*40;
	}else{
		int a=int(n*0.5)/25,b=int(n*0.5)/40;
		cout<<a<<' '<<b<<endl<<n-a*25-b*40;
	}
}

