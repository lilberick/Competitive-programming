//https://codeforces.com/problemset/problem/115/A
//Lang		:	GNU C++14
//Time		:	62 ms
//Memory	:	220 KB
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> bfs(int node,vector<vector<int>>& grafo,int n){
	vector<int> dist; dist.resize(n,-1);
	queue<int> q;
	dist[node]=0;
	q.push(node) ;
	while(!q.empty()){
		int nodoActual = q.front();
		q.pop();
		for(int nxtNode : grafo[nodoActual]){
			if(dist[nxtNode] == -1){
				dist[nxtNode] = dist[nodoActual]+1;
				q.push(nxtNode);
			}
		}
	}
	return dist;
}
int main(){
	int n, m;
	cin>>n;
	vector<vector<int>> grafo;
	grafo.resize(n+1);
	for(int i=1; i<=n; i++){
		int a;
		cin>>a;
		if(a==-1) grafo[0].push_back(i);
		else grafo[a].push_back(i);
	}
	if(n==1) cout<<1<<endl;
	else{
		n=n+1;
		int r=0;
		for(int i=0;i<n;i++){
			vector<int> v=bfs(i,grafo,n);
			for(int i=0;i<v.size();i++){
				r=max(v[i],r);
			}
		}
		cout<<r<<endl;
	}
}
