//https://codeforces.com/problemset/problem/119/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a,b,n,x;
	while(cin>>a>>b>>n){
		bool p=true;
		while(n!=0){
			x=(p?a:b);
			n-=__gcd(x,n);
			p=!p;
		}
		cout<<p<<endl;
	}
	return 0;
}
