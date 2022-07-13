//https://codeforces.com/problemset/problem/855/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	200 KB
#include<iostream>
#include<map>
using namespace std;
int main(){
	int n;
	map<string,int> m;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		m[s]++;
		cout<<(m[s]==1?"NO":"YES")<<"\n";
	}
	return 0;
}
