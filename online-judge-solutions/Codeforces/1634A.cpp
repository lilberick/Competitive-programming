//https://codeforces.com/problemset/problem/1634/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	1000 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t,n,k;
	cin>>t;
	while(t--){
		string s;
		cin>>n>>k>>s;
		string r=s;
		reverse(s.begin(),s.end());
		if(k==0) cout<<"1\n";
		else{
			if(s==r){cout<<"1\n";}
			else{cout<<"2\n";}
		}
	}
	return 0;
}
