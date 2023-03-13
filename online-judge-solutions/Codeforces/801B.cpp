//https://codeforces.com/problemset/problem/801/B
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	string x,y,s;cin>>x>>y;
	bool b=true;
	for(int i=0;i<x.size() && b;i++){
		if(x[i]<y[i]) b=false;
		s+=x[i]==y[i]?'z':y[i];
	}
	cout<<(!b?"-1":s)<<endl;
	return 0;
}
