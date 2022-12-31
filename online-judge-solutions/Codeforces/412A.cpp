//https://codeforces.com/problemset/problem/412/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n,k;
	while(cin>>n>>k){
		string s,w(n,'-');
		cin>>s;
		cout<<"PRINT "<<s[k-1]<<endl;
		s[k-1]='-';
		bool d=false;
		if(k>n/2) d=true;
		while(s!=w){
			if(d){
				if(k==n){d=1-d;k--;}
				else k++;
			}else{
				if(k==1){d=1-d;k++;}
				else k--;
			}
			cout<<(d?"RIGHT":"LEFT")<<endl;
			if(s[k-1]!='-')cout<<"PRINT "<<s[k-1]<<endl;
			s[k-1]='-';
		}
	}
	return 0;
}
