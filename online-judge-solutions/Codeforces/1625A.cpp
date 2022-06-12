//https://codeforces.com/problemset/problem/1625/A
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	200 KB
#include<iostream>
#include<bitset>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
vector<vector<int> > transpose(const vector<vector<int> > &b){
    vector<vector<int> > trans_vec(b[0].size(), vector<int>());
    for (int i = 0; i < b.size(); i++){
        for (int j = 0; j < b[i].size(); j++){
            trans_vec[j].push_back(b[i][j]);
        }
    }
    return trans_vec;
}
int main(){
	int t,n,l,a;
	cin>>t;
	while(t--){
		cin>>n>>l;
		vector<string> x;
		vector<vector<int>> v;
		vector<int> respuesta;
		for(int i=0;i<n;i++){
			cin>>a;
			string s=bitset<30>(a).to_string();
			x.push_back(s);
		}
		for(int i=0;i<x.size();i++){
			vector<int> vsub;
			for(int j=0;j<x[0].size();j++){
				vsub.push_back((int(x[i][j]-48)));
			}
			v.push_back(vsub);
		}
		v=transpose(v);
		for(int i=0;i<v.size();i++){
			int n0=count(v[i].begin(),v[i].end(),0);
			int n1=count(v[i].begin(),v[i].end(),1);
			(n0>=n1)?respuesta.push_back(0):respuesta.push_back(1);
		}
		reverse(respuesta.begin(),respuesta.end());
		int r=0;
		for(int i=0;i<respuesta.size();i++){
			r+=respuesta[i]*pow(2,i);
		}
		cout<<r<<endl;
	}
	return 0;
}
