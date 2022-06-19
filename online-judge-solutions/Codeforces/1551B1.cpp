//https://codeforces.com/problemset/problem/1551/B1
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	100 KB
#include<iostream>
#include<map>
using namespace std;
#define typeof(x) __typeof__(x)
#define tr(c,i) for(typeof(c.begin()) i=c.begin(); i!=c.end(); i++)
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		map<char,int> m;
		for(char x:s){m[x]++;}
		int dif=0,r=0;
		tr(m,i){
			i->second>=2 ? r++:dif++;
		}
		r+=dif/2;
		cout<<r<<endl;
	}
	return 0;
}
