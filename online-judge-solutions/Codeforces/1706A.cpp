//https://codeforces.com/problemset/problem/1706/A
//Lang		:	GNU C++14
//Time		:	93 ms
//Memory	:	200 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t,n,m,a;
	cin>>t;
	while(t--){
		cin>>n>>m;
		string s(m,'B');
		vector<int> r;
		while(n--){cin>>a;r.push_back(a);}
		for(int i=0;i<r.size();i++){
			int imin=min(r[i]-1,m+1-r[i]-1);
			int imax=max(r[i]-1,m+1-r[i]-1);
			s[imin]=='B' ? s[imin]='A':s[imax]='A';
		}
		cout<<s<<endl;
	}
	return 0;
}
