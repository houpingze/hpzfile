#include<iostream>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m,a[1001][1010],b[1010][1010];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j]; 
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>b[i][j]; 
			if(a[i][j]==b[i][j]) cnt++;
		}
	}
	cout<<cnt;
	
}

