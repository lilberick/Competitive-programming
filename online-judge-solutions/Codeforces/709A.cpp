//https://codeforces.com/problemset/problem/709/A
//Lang		:	GNU C++14
//Time		:	46 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	long long n,b,d,a,s=0,j=0;cin>>n>>b>>d;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a<=b){
			s+=a;
			if(s>d){s=0;j++;}
		}
	}
	cout<<j<<endl;
	return 0;
}
