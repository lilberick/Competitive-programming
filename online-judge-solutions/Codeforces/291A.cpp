//https://codeforces.com/problemset/problem/291/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	200 KB
#include<iostream>
#include<map>
using namespace std;
#define typeof(x) __typeof__(x)
#define tr(c,i) for(typeof(c.begin()) i=c.begin(); i!=c.end(); i++)
int main(){
	int n;
	while(cin>>n){
		int d,r=0;
		map<int,int> m;
		for(int i=0;i<n;i++){
			cin>>d;
			m[d]++;
		}
		tr(m,i){
			if(i->first!=0 && i->second==2) r++;
			if(i->first!=0 && i->second>2){r=-1;break;};
		}
		cout<<r<<endl;
	}
	return 0;
}
