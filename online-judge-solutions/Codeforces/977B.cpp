//https://codeforces.com/problemset/problem/977/B
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	100 KB
#include<iostream>
#include<map>
using namespace std;
#define typeof(x) __typeof__(x)
#define tr(c,i) for(typeof(c.begin()) i=c.begin(); i!=c.end(); i++)
int main(){
	int n;
	while(cin>>n){
		string s,r;cin>>s;
		map<string,int> m;
		for(int i=0;i<n-1;i++){
			string w;w=string(1,s[i])+s[i+1];
			m[w]++;
		}
		int c=0;
		tr(m,i){
			if(i->second>c){
				c=i->second;
				r=i->first;
			}
		}
		cout<<r<<endl;
	}
	return 0;
}
