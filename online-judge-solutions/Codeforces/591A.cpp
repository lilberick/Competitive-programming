//https://codeforces.com/problemset/problem/591/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	100 KB
#include<iostream>
using namespace std;
int main(){
	double l,p,q;cin>>l>>p>>q;
	cout<<p*(l/(p+q))<<endl;
	return 0;
}
