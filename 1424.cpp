#include<bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m,t;
int main(){
	cin>>n;
	while(t<=n){
		m++;
		for(int i=1;i<=m;i++) {
			cnt+=m,t++;
			if(t>n) break;
		}
	}
	cout<<cnt;
}

