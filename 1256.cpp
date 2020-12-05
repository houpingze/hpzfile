#include<iostream>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m,a[1001][1001];
void dfs(int x,int y){
	if(x>n||y>m) return ;
	if(a[x][y]==0) dfs(x,y+1),dfs(x+1,y);
	else{
		if(a[x+1][y]==0&&a[x][y+1]==0){
			cnt++;
			dfs(x,y+1);
			dfs(x+1,y); 
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>a[i][j];
			}
		}
		dfs(1,1);
		cout<<cnt;
		cnt=0;
		cout<<endl;
	}
}

