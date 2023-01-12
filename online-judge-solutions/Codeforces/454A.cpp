//https://codeforces.com/problemset/problem/454/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;
	for(int i=0;i<n;i++){
		string s(n,'*');
		int c=i;
		if(c>n/2) c=n-1-c;
		c=2*c+1;
		for(int j=(n-c)/2;j<((n-c)/2)+c;j++) s[j]='D';
		cout<<s<<endl;
	}
	return 0;
}
