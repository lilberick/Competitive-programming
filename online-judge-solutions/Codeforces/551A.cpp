//https://codeforces.com/problemset/problem/551/A
//Lang		:	GNU C++14
//Time		:	46 ms
//Memory	:	300 KB
#include<iostream>
#include<map>
using namespace std;
int main(){
	int n,x;cin>>n;
	int a[n];
	map<int,int> m,p;
	for(int i=0;i<n;i++){cin>>a[i];m[a[i]]++;}
	m[m.rbegin()->first+1]=0;
	for(int i=1;i<m.size();i++){
		int s=1;
		for(auto j=next(m.begin(),i);j!=--m.end();j++) s+=j->second;
		p[next(m.begin(),i-1)->first]=s;
	}
	for(int i:a){cout<<p[i]<<" ";}cout<<endl;
	return 0;
}
