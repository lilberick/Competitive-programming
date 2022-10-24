//https://codeforces.com/problemset/problem/1754/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t,n;
	for(cin>>t;t--;){
		cin>>n;
		char c;
		int q=0;
		for(int i=0;i<n;i++){
			cin>>c;
			if(c=='Q') q++;
			else{
				if(q>0) q--;
			}

		}
		cout<<(q?"NO":"YES")<<endl;
	}
	return 0;
}
