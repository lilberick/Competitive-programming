//https://codeforces.com/problemset/problem/1714/C
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,s;
	cin>>t;
	while(t--){
		cin>>s;
		string w;
		for(int i=9;i>=1;i--){
			if(s>=i){
				w=char(i+'0')+w;
				s-=i;
			}
		}
		cout<<w<<endl;
	}
	return 0;
}
