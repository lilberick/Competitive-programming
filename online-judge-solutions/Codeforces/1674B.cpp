//https://codeforces.com/problemset/problem/1674/B
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	200 KB
#include<iostream>
#include<map>
using namespace std;
int main(){
	map<string,int> m;
	int k=0;
	for(int i=1;i<=26;i++){
		for(int j=1;j<=26;j++){
			if(i!=j){
				k++;
				string w=string(1,char(i+96))+string(1,char(j+96));
				m[w]=k;
			}
		}
	}
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<m[s]<<endl;
	}
	return 0;
}
