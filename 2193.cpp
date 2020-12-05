#include<iostream>
#include<cstdio>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m;
inline int read()
{
    register int x = 0 , ch = getchar();
    while( !isdigit( ch ) ) ch = getchar();
    while( isdigit( ch ) ) x = x * 10 + ch - '0' , ch = getchar();
    return x;
}
int a[50001],b[50001],c[50202];
int main(){
	cin>>n;
	for(register int i=1;i<=n;++i) a[i]=read();
	for(register int i=1;i<=n;++i) b[i]=read();
	for(register int i=1;i<=n;++i) c[i]=read();
	for(int i=1;i<=n;++i){
		for(int j=i+1;j<=n;++j){
			if(a[i]<a[j]&&b[i]<b[j]&&c[i]<c[j]) ++cnt; 
		}
	} 
	cout<<cnt;
}

