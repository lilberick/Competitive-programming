//https://codeforces.com/problemset/problem/1711/A
//Lang		:	GNU C++14
//Time		:	62 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<n<<" ";
		for(int i=1;i<n;i++){
			cout<<i<<" ";
		}cout<<endl;
	}
	return 0;
}
