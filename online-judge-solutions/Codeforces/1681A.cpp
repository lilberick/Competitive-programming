//https://codeforces.com/problemset/problem/1681/A
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	100 KB
#include<iostream>
#include<set>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n,m,k,x,y;
	for(cin>>t;t--;){
		set<int> a,b;
		cin>>n;while(n--){cin>>k;a.insert(k);}
		cin>>m;while(m--){cin>>k;b.insert(k);}
		x=*a.rbegin();y=*b.rbegin();
		if(x>y) cout<<"Alice\nAlice\n";
		else if(x<y) cout<<"Bob\nBob\n";
		else cout<<"Alice\nBob\n";
	}
	return 0;
}
