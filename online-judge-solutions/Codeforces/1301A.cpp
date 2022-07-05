//https://codeforces.com/problemset/problem/1301/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b,c;
		cin>>a>>b>>c;
		int r=0;
		for(int i=0;i<a.size();i++){
			if(c[i]==b[i] || c[i]==a[i]) r++;
		}
		r==a.size()? cout<<"YES\n":cout<<"NO\n";
	}
	return 0;
}
