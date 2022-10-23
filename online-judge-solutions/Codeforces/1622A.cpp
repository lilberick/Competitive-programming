//https://codeforces.com/problemset/problem/1622/A
//Lang		:	GNU C++14
//Time		:	62 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;
	for(cin>>t;t--;){
		int l[3];
		cin>>l[0]>>l[1]>>l[2];
		sort(l,l+3);
		if(((l[0]==l[1] && l[2]%2==0) || (l[1]==l[2] && l[0]%2==0)) || l[2]==l[0]+l[1]) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
