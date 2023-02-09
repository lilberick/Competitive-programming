//https://codeforces.com/problemset/problem/688/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	100 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,d;cin>>n>>d;
	vector<int> w,l;
	for(int i=1;i<=d;i++){
		string s;cin>>s;
		(s.find('0')<s.size())?w.push_back(i):l.push_back(i);
	}
	if(d==l.size()) cout<<0<<endl;
	else{
		w.insert(begin(w),-1);
		l.insert(begin(l),-1);
		int a=0,ma=0;
		for(int i=1;i<w.size();i++){
			(w[i]-w[i-1]==1)?a++:a=0;
			ma=max(ma,a);
		}
		cout<<ma+1<<endl;
	}
	return 0;
}
