#include<iostream>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m,a[120001],b[100101];
int main(){
	cin>>n;
	for(int i=1;i<=2*n;i++) a[i]=i;
	while(1){
		for(int i=1;i<=n;i++) b[2*i]=a[i];
		for(int i=n+1;i<=2*n;i++) b[2*(i-n)-1]=a[i];
		cnt++;
		memcpy(a,b,sizeof(b));
		bool f=0;
		for(int i=1;i<=2*n;i++){
			if(a[i]!=i){
				f=1;
				break;
			}
		}
		if(f==0){
			cout<<cnt;
			return 0; 
		}
	}
}

