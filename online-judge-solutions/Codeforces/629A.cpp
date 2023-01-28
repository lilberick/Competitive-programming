//https://codeforces.com/problemset/problem/629/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	100 KB
#include<iostream>
#include<map>
using namespace std;
int main(){
	int n,s=0;cin>>n;
	map<int,int> f,c;
	char x;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>x;
			if(x=='C'){f[i]++;c[j]++;}
		}
	}
	for(auto i=f.begin();i!=f.end();i++) s+=(i->second)*(i->second-1)/2;
	for(auto i=c.begin();i!=c.end();i++) s+=(i->second)*(i->second-1)/2;
	cout<<s<<endl;
	return 0;
}
