#include<iostream>
#include<cstdio>
typedef unsigned long long ull;
using namespace std;
ull n,cnt,m,x,y,l[1010],a[1010],q;
ull c(ull x){
	if(!x) return 0;
	int i=1;
	while(l[i]<=x) i++;
	return a[i-1]+c(x-l[i-1]);
}
int main(){
	l[1]=1,l[2]=2,a[1]=1,a[2]=1;
	for(int i=3;i<=91;i++){
		l[i]=l[i-1]+l[i-2],a[i]=a[i-1]+a[i-2];
	}
	cin>>q;
	while(q--){
		cin>>x>>y;
		cout<<c(x,y)<<endl;
	}
}

