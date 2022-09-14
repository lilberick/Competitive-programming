//https://codeforces.com/problemset/problem/1729/A
//Lang		:	GNU C++14
//Time		:	46 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,a,b,c,d1,d2;
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		d1=a-1;
		d2=abs(b-c)+c-1;
		int r=0;
		if(d1<=d2) r++;
		if(d1>=d2) r+=2;
		cout<<r<<endl;
	}
	return 0;
}
