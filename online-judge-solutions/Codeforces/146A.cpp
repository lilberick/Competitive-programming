//https://codeforces.com/problemset/problem/146/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int r=0,l=0,sl=0,sr=0;
		for(int i=0;i<n;i++){
			char c;
			cin>>c;
			if(i<n/2 && (c=='7' || c=='4')){l++,sl+=c-'0';}
			if(i>=n/2 && (c=='7' || c=='4')){r++;sr+=c-'0';}
		}
		if((l==r) && l==n/2 && sl==sr) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
