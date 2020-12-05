#include<iostream>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m;
char a[1001][1001]; 
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]=='*') cout<<"*";
			else{
				cout<<(a[i+1][j-1]=='*')+(a[i-1][j]=='*')+(a[i][j-1]=='*')+(a[i+1][j]=='*')+(a[i][j+1]=='*')+(a[i-1][j-1]=='*')+(a[i+1][j+1]=='*')+(a[i-1][j+1]=='*');
			}
		}
		cout<<endl;
	}
}

