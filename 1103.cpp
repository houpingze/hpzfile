#include<iostream>
#include<cmath>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m;
int main(){
	string s;
	cin>>s;
	if(s[0]=='-') {
		cout<<"-";
		s.erase(0,1);
	}
	while(s[s.size()-1]=='0') s.erase(s.size()-1,1);
	if(s=="") s="0";
	for(int i=s.size()-1;i>=0;i--) cout<<s[i];
}

