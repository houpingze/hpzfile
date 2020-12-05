#include<iostream>
#include<cmath>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m;
double mx;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		double s;
		cin>>s;
		mx=max(mx,s);
	}
	mx*=2;
	cout<<ceil(10/mx)*ceil(2/mx);
}

