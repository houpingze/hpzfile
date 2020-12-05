#include<iostream>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m;
int main(){
	double s;
	string a,b;
	cin>>s>>a>>b;
	m=a.size();
	for(int i=0;i<m;i++){
		if(a[i]==b[i]) cnt++;
	}
	if(cnt*1.0/m>=s) cout<<"yes";
	else cout<<"no";
}

