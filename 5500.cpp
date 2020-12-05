#include<iostream>
#include<cstdio>
#include<algorithm>
typedef unsigned long long ull;
using namespace std;
ull n,cnt,m,f[1010],aaa=1,a[1010];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		m=max(m,a[i]);
	}
	f[1]=f[2]=1;
	for(int i=3;i<=m;i++) f[i]=f[i-1]+f[i-2];
	for(int i=1;i<=n;i++){
		aaa=aaa*f[a[i]]/__gcd(aaa,f[a[i]]);
	}
	cout<<aaa;
}

