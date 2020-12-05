#include<iostream>
#include<cstdio>
typedef unsigned long long ull;
using namespace std;
inline int hc(int x){//6 2 5 5 4 5 6 3 7 6
	switch (x){
		case 0: return 6;
		case 1: return 2;
		case 2: return 5;
		case 3: return 5;
		case 4: return 4;
		case 5: return 5;
		case 6: return 6;
		case 7: return 3;
		case 8: return 7;
		case 9: return 6; 
	}
}
inline int akioi(int n){
    int ans=0;
    int ii=n;
    do{
		ans+=hc(ii%10);
		ii/=10;
	}while(ii);
	return ans;
}
int n,cnt,m,a[1010],b[1010],t[1011],c[1010],tmp;
int main(){
	cin>>n; 
	for(int i=0;i<2000;++i){
		for(int j=0;j<2000;++j){
			int k=i+j; 
			if(akioi(i)+akioi(j)+akioi(k)==n-4){
				cnt++; 
			}
		}
	}
	cout<<cnt;
	return 0;
}
