#include<iostream>
#include<cstdio>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m,a[101001],b[101001],xuan[10101];
struct r{
	int a;
}c[10100];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[a[i]]++;
	} 
	for(int i=1;i<=n;i++){
		int mx=-1,id=0;
		for(int j=1;j<=n;j++) if(b[j]>mx&&xuan[j]==0) mx=b[j],id=j;
		if(xuan[a[id]]==0) {
			xuan[a[id]]=id;
			xuan[id]=a[id]; 
		}else{
			for(int k=1;k<=n;k++){ 
				if(xuan[k]==0&&k!=id){
					xuan[id]=k;
					xuan[k]=id;
					break;
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<i<<' '<<xuan[i]<<endl;
	}
}

