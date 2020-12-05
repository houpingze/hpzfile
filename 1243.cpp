#include<iostream>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m;
int main(){
	int f[50];
	f[1]=1,f[2]=2;
	for(int i=3;i<=50;i++) f[i]=f[i-1]+f[i-2]; 
	while(cin>>n){
		cout<<f[n]<<endl;
	}
}

