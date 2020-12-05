#include<iostream>
#include<cstdio>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m,a[1010],b[101],c[101],p[1010];
int main(){
	cin>>n;
	while(n--){
		cin>>m;
		for(int i=1;i<=m;i++){ 
			cin>>a[i]; 
		}
		for(int i=1;i<=m;i++){ 
			cin>>b[i]; 
		}
		for(int i=1;i<=m;i++){ 
			cin>>c[i]; 
		}
		p[1]=a[1];
		cout<<p[1]<<' ';
		for(int i=2;i<=m;i++){
			if(p[i-1]!=a[i]) p[i]=a[i];
			else if(p[i-1]!=b[i]) p[i]=b[i];
			else if(p[i-1]!=c[i]) p[i]=c[i];
			if(i==m&&p[1]==p[m]){
				if(p[1]!=a[i]&&p[i-1]!=a[i]) p[m]=a[i];
				if(p[1]!=b[i]&&p[i-1]!=b[i]) p[m]=b[i];
				if(p[1]!=c[i]&&p[i-1]!=c[i]) p[m]=c[i];
				
			}
			cout<<p[i]<<' ';
		}
		
		cout<<endl;
	}
}

