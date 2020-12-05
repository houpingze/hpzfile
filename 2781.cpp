#include<iostream>
#include<cstdio>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m,a[10010111];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		if(a[i]>a[i-1]) cnt++,m+=cnt;
		else cnt=1,m++;
	} 
	cout<<m;
}

