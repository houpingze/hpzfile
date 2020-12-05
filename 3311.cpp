#include<iostream>
#include<cstdio>
typedef unsigned long long ull;
using namespace std;
int n,cnt;
bool i(int y){
	return y%4==0&&y%100!=0||y%400==0;
}
int Y,M,D,y=1900,m=1,d=1,xq=1;
int mo[100]{0,31,29,31,30,31,30,31,31,30,31,30,31};
int main(){
    cin>>n;
    while(n--){
        int aa,bb,t,cc,dd;
        cin>>t;
        int y=2000;
        aa=t/100,bb=t%100;
        cin>>t;
        cc=t/100,dd=t%100;
        if(i(y)) mo[2]=29;
        else mo[2]=28;
        while(!(aa==cc&&bb==dd)){ 
            aa++; 
            cnt++;
            if(aa>mo[bb]){
                aa=1;
                bb++;
                if(bb==13){
                    bb=1;  
                }
            }
        } 
        if(cnt>100) cout<<"YES";
        else cout<<"NO";    
        cout<<endl;
        cnt=0;
    }

}

