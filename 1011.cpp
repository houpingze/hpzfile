#include<iostream>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m;
int a[10005],t[10000];
void dfs(int x){
	if(x>n){
		for(int i=1;i<=n;i++) cout<<a[i]<<' ';
		cout<<endl;
		return ;
	} 
	for(int i=1;i<=n;i++){
		if(t[i]==0){
			t[i]=1;
			a[x]=i;
			dfs(x+1);
			t[i]=0;
			a[x]=0;
		}
	}
} 
int main(){
	cin>>n;
	dfs(1);
}

