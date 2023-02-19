//https://codeforces.com/problemset/problem/706/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
	int a,b,n,x,y,v,d;cin>>a>>b>>n;
	double m=1e9;
	for(int i=0;i<n;i++){
		cin>>x>>y>>v;
		m=min(m,hypot(a-x,b-y)/(v*1.0));
	}
	cout<<setprecision(20)<<fixed<<m<<endl;
	return 0;
}
