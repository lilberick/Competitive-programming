//https://codeforces.com/problemset/problem/1744/B
//Lang		:	GNU C++14
//Time		:	374 ms
//Memory	:	1000 KB
#include<iostream>
#include<map>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	long long t,n,q,a;
	for(cin>>t;t--;){
		cin>>n>>q;
		long long type,x,s=0,impar=0,par=0;
		for(int i=0;i<n;i++){
			cin>>a;
			s+=a;
			(a%2==0)?par++:impar++;
		}
		map<int,int>m;
		m[0]=par,m[1]=impar;
		for(int i=0;i<q;i++){
			cin>>type>>x;
			s+=m[type]*x;
			if(m[type]>0 && x%2==1){m[1-type]=n;m[type]=0;}
			cout<<s<<endl;
		}
	}
	return 0;
}
