//https://codeforces.com/problemset/problem/22/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	100 KB
#include<iostream>
#include<set>
using namespace std;
int main(){
	int n,a;
	while(cin>>n){
		set<int> s;
		while(n--){
			cin>>a;
			s.insert(a);
		}
		if(s.size()==1) cout<<"NO\n";
		else cout<<(*next(begin(s),1))<<endl;
		
	}
	return 0;
}
