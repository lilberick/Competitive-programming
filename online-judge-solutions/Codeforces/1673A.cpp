//https://codeforces.com/problemset/problem/1673/A
//Lang		:	GNU C++14
//Time		:	186 ms
//Memory	:	500 KB
#include<iostream>
#include<numeric>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int r=accumulate(s.begin(),s.end(),0);
		r-=s.size()*96;
		if(s.size()%2==0){
			cout<<"Alice "<<r<<endl;
		}else{
			if(s.size()==1) cout<<"Bob "<<s[0]-96<<endl;
			else{
				int u=max(r-2*(s[0]-96),r-2*(s[s.size()-1]-96));
				cout<<"Alice "<<u<<endl;
			}
		}
	}
	return 0;
}
