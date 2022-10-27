//https://codeforces.com/problemset/problem/1741/B
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n;
	for(cin>>t;t--;){
		cin>>n;
		if(n==3) cout<<"-1\n";
		else{
			cout<<n<<" "<<n-1<<" ";
			for(int i=0;i<n-2;i++){cout<<i+1<<" ";}cout<<endl;
		}
	}
	return 0;
}
