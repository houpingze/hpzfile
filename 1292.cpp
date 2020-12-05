#include<iostream>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m,a[1000011];
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		cin>>a[i];
	} 
	for(int i=1;;++i){
		cnt=0;
		for(int j=1;j<=m;++j) cnt+=a[j]/i;
//		cout<<cnt<<endl;
		if(cnt<n){
			cout<<i-1;
			return 0;
		}
	}
}

