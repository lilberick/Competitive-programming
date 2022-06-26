//https://codeforces.com/problemset/problem/1481/A
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	1300 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t,px,py;
	cin>>t;
	while(t--){
		string s;
		cin>>px>>py>>s;
		int R=count(s.begin(),s.end(),'R');
		int L=count(s.begin(),s.end(),'L');
		int D=count(s.begin(),s.end(),'D');
		int U=count(s.begin(),s.end(),'U');
		bool rx=false,ry=false;
		if((px>=0 && R-px>=0) || (px<0 && px+L>=0)) rx=true;
		if((py>=0 && U-py>=0) || (py<0 && py+D>=0)) ry=true;
		(rx && ry) ? cout<<"YES\n":cout<<"NO\n";
	}
	return 0;
}
