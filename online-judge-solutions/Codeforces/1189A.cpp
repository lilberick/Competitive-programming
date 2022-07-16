//https://codeforces.com/problemset/problem/1189/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		string s;cin>>s;
		int n0=count(s.begin(),s.end(),'0');
		int n1=count(s.begin(),s.end(),'1');
		if(n0!=n1){cout<<"1\n";cout<<s<<"\n";}
		else{
			cout<<"2\n";
			for(int i=1;i<s.size();i++){
				string s1=s.substr(0,i);
				int ns1_0=count(s1.begin(),s1.end(),'0');
				int ns1_1=count(s1.begin(),s1.end(),'1');
				string s2=s.substr(i,s.size()-1);
				int ns2_0=count(s2.begin(),s2.end(),'0');
				int ns2_1=count(s2.begin(),s2.end(),'1');
				if(ns1_0!=ns1_1 && ns2_0!=ns2_1){
					cout<<s1<<" "<<s2<<endl;
					break;
				}
			}
		}
	}
	return 0;
}
