//https://codeforces.com/problemset/problem/624/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	long long d,L,v1,v2;cin>>d>>L>>v1>>v2;
	cout<<setprecision(20)<<fixed<<((L-d)*1.0)/(v1+v2)<<endl;
	return 0;
}
