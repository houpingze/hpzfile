#include<iostream>
#include<cstdio>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m,a[1000][100];
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			int t;
			cin>>t;
			if(t==a[i][j]) cnt++;
		}
	}
//	cout<<cnt;
	printf("%.2f",cnt/1.0/((double)n*m)*100.0);
	cout<<"%";
}

