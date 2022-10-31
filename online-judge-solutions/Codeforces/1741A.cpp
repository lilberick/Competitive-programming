//https://codeforces.com/problemset/problem/1741/A
//Lang		:	GNU C++14
//Time		:	93 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t;
	for(cin>>t;t--;){
		string a,b;cin>>a>>b;
		if(a==b) cout<<"=\n";
		else{
			if(a[a.size()-1]==b[b.size()-1]){
				if((a.size()>b.size())==(a[a.size()-1]=='L')) cout<<">\n";
				else cout<<"<\n";
			}else if(a[a.size()-1]<b[b.size()-1]) cout<<">\n";
			else cout<<"<\n";
		}
	}
	return 0;
}
