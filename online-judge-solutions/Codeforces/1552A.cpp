//https://codeforces.com/problemset/problem/1552/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		string s;
		cin>>n>>s;
		string r=s;
		sort(s.begin(),s.end());
		int p=0;
		for(int i=0;i<s.size();i++){
			if(s[i]!=r[i]) p++;
		}
		cout<<p<<endl;
	}
	return 0;
}
