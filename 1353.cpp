#include<iostream>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m;
int c(int x,int y){
	if(x+1==y||x==4&&y==1) return 1;
	if(y+1==x||y==4&&x==1) return -1;
	return 0;
} 
int a[10010],b[1010],na,nb,ca,cb;
int main(){
	cin>>n>>na>>nb;
	for(int i=1;i<=na;i++) cin>>a[i];
	a[0]=a[na];
	for(int i=1;i<=nb;i++) cin>>b[i];
	b[0]=b[nb];
	for(int i=1;i<=n;i++){
		int r=c(a[i%na],b[i%nb]);
		if(r==1) ca++;
		if(r==-1) cb++;
	}
	if(ca>cb) cout<<"A";
	else if(ca<cb) cout<<"B";
	else cout<<"D";
}

