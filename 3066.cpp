#include<iostream>
#include<cstdio>
typedef unsigned long long ull;
using namespace std;
int n,cnt=1,m,a[40][40];
int main(){
	cin>>n;
	a[1][n/2]=1;
	int x=1,y=n/2;
	while(cnt++){
		if(cnt==n*n+1) break;
		if(x==1&&y!=n){
			a[n][y+1]=cnt;
			x=n,y=y+1;
		}else if(y==n&&x!=1){
			a[x-1][1]=cnt;
			x=x-1,y=1;
		}else if(y==n&&x==1){
			a[x+1][y]=cnt;
			x++;
		}else{
			if(a[x-1][y+1]) a[x-1][y+1]=cnt,x--,y++;
			else a[x+1][y]=cnt,cnt++;
		}
		
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}
	return 0; 
}

