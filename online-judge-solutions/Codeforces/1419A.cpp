//https://codeforces.com/problemset/problem/1419/A
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	100 KB
#include<iostream>
#include<set>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		string s;
		cin>>s;
		set<int> t1,t2;
		int c=0;
		for(char x:s){
			if(c%2==0) t1.insert((x-48)&1<<0);
			else t2.insert((x-48)&1<<0);
			c++;
		}
		if(n%2==0){
			if(t2.find(0) !=t2.end()) cout<<"2\n";
			else cout<<"1\n";
		}else{
			if(t1.find(1) !=t1.end()) cout<<"1\n";
			else cout<<"2\n";
		}
	}
	return 0;
}

