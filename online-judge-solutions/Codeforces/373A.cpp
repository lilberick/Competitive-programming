//https://codeforces.com/problemset/problem/373/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<map>
using namespace std;
int main(){
	int k;
	while(cin>>k){
		int n=16;
		char x;
		bool b=true;
		map<int,int> m;
		while(n--){
			cin>>x;
			if(x-'0'>=0 && x-'0'<=9) m[x-'0']++;
			if(m[x-'0']>(2*k)) b=false;
		}
		cout<<(b?"YES":"NO")<<"\n";
	}
	return 0;
}
