#include<iostream>
#include<cstdio>
#include<algorithm>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m;
struct s{
	int s;
	string n;
}a[10101];
bool cmp(s a,s b){
	return a.s>b.s;
}
int main(){
	cin>>n;
	cin>>m;
	for(int i=1;i<=n;i++) cin>>a[i].n>>a[i].s;
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		cout<<a[i].n<<endl;
	}
}

