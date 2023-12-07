//https://cses.fi/problemset/task/1069
//Lang		:	GNU C++11
//Time		:	0.06 s
//Memory	:	173 ch.
#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
	char c,w='z';
	int x=1,n=1;
	while(cin>>c){
		if(c==w){x++; n=max(x,n);}	
		else x=1;
		w=c;
	}
	cout<<n<<endl;
	return 0;
}
