//https://codeforces.com/problemset/problem/1038/A
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	100 KB
#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
	int n,k;
	while(cin>>n>>k){
		map<char,int> m;
		for(int i=0;i<k;i++) m[char(i+65)]=0;
		char c;
		while(n--){cin>>c;m[c]++;}
		map<char,int>::iterator i;
		i=min_element(m.begin(),m.end(),[](const pair<char,int>& a,const pair<char,int>& b)->bool{return a.second<b.second;});
		cout<<i->second*k<<"\n";
	}
	return 0;
}
