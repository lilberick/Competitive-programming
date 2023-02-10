//https://codeforces.com/problemset/problem/680/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<map>
using namespace std;
int main(){
	int a,m2=0,m3=0;
	map<int,int> m;
	for(int i=0;i<5;i++){cin>>a;m[a]++;}
	for(auto i=m.begin();i!=m.end();i++){
		if(i->second==2) m2=max(m2,i->first);
		else if(i->second>2) m3=i->first;
	}
	int s=0;
	for(auto &i:m) s+=i.first*i.second;
	cout<<min(s-m2*2,s-m3*3)<<endl;
	return 0;
}
