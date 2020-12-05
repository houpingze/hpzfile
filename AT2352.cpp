#include<bits/stdc++.h>
using namespace std;
int m=99999999,n,x,a[101010];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=1;i<=m;i++){
		x+=a[i]+i-1;
	}
	cout<<x<<endl;
} 

