#include<iostream>
#include<cstdio>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m,w;
ull mx,a[101];
int main(){
	cin>>n>>w;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			for(int k=j+1;k<=n;k++){
				if(a[i]+a[j]+a[k]<=w){
					mx=max(mx,a[i]*a[j]*a[k]);
				}
			}
		}
	}
	cout<<mx;
	return 0;
}

