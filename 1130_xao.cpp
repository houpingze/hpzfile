#include<iostream>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m,a[1000000];
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		a[s[i]]++;
	}
	for(int i=0;i<s.size();i++){
		if(a[s[i]]==1){
			cout<<s[i];
			return 0;
		}
	}
	cout<<"no";
}

