//https://codeforces.com/problemset/problem/686/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n,d;
	long long x;
	while(cin>>n>>x){
		char c;
		int a=0;
		while(n--){
			cin>>c>>d;
			c=='+'? x+=d:(x>=d?x-=d:a++);
		}
		cout<<x<<" "<<a<<endl;
	}
	return 0;
}
