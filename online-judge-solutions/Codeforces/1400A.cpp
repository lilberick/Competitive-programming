//https://codeforces.com/problemset/problem/1400/A
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	100 KB
#include<iostream>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		string s,r;
		cin>>n>>s;
		if(s.size()==1){cout<<s<<endl;}
		else{
			char extremo=s[(2*n-1)/2];
			for(int i=0;i<s.size();i++){
				if(i%2==0 && i>0 && i<s.size()-1) r+=s[i];
			}
			r=extremo+r+extremo;
			cout<<r<<endl;
		}
	}
	return 0;
}
