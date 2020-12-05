#include<iostream>
#include<cstdio>
#include<cstring>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m,k;
int a[1010],b[1010],c[1010];
string x,y;
string p(string x,string y){
	memset(c,0,sizeof(c));
    memset(b,0,sizeof(b));
    memset(a,0,sizeof(a));
	a[0]=x.size(),b[0]=y.size();
	for(int i=1;i<=a[0];i++){
		a[i]=x[a[0]-i]-'0';
	}
	for(int i=1;i<=b[0];i++){
		b[i]=y[b[0]-i]-'0';
	}
	c[0]=max(a[0],b[0]);
	int jw=0;
	for(int i=1;i<=c[0];i++){
		c[i]=a[i]+b[i]+jw,jw=c[i]/10,c[i]%=10;
	}
	if(jw==1) c[0]++,c[c[0]]=1;
	string s=""; 
	for(int i=1;i<=c[0];i++){
		s=char(c[i]+'0')+s;
	}
	return s;
}
string f[110],az[1010],aa;
int main(){
	cin>>n>>k;
	f[1]="1",f[2]="1"; 
	for(int i=3;i<=n;i++) f[i]=p(f[i-1],f[i-2]);
	// 
    for(int i=1;i<=n;i++){
        string ans="";
        for(int j=1;j<=k;j++) ans=p(ans,f[i]);//f(i,j)
        az[i]=ans;
        aa=p(aa,az[i]);
    }
	
	cout<<aa<<endl;
	return 0;
}

