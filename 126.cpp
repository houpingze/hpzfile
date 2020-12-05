#include<iostream>
#include<algorithm>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m,s,a[1000000],sum;
int main(){
	cin>>n>>s;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
		if(sum>s){
			cnt++;
			sum=a[i];
		}
	}
	if(sum) cnt++;
	cout<<cnt;
	
}

