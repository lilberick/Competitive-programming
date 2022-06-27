//https://codeforces.com/problemset/problem/1504/A
//Lang		:	GNU C++14
//Time		:	93 ms
//Memory	:	2900 KB
#include<iostream>
#include<algorithm>
using namespace std;
bool NoisPal(string s){
	string r=s;
	reverse(s.begin(),s.end());
	if(r==s) return false;
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(NoisPal(s+'a') || NoisPal('a'+s)){
			cout<<"YES\n";
			if(NoisPal(s+'a')) cout<<s+'a'<<"\n";
			else if(NoisPal('a'+s)) cout<<'a'+s<<"\n";
		}else{cout<<"NO\n";}
	}
	return 0;
}
