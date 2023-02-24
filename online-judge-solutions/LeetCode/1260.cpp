//https://leetcode.com/problems/shift-2d-grid
//Lang		:	C++
//Time		:	322 ms
//Memory	:	268.5 MB
vector<vector<int>> traslada(vector<vector<int>> g){
	for(int i=0;i<g.size();i++){
		deque<int> d(begin(g[i]),end(g[i]));
		int x=g[i].back();
		d.pop_back();
		d.push_front(x);
		vector<int> w(begin(d),end(d));
		swap(g[i],w);
	}
	return g;
}
class Solution{
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& g, int k){
		for(int i=0;i<k;i++){
			g=traslada(g);
			int u=g[g.size()-1][0];
			vector<int> r;
			for(int i=0;i<g.size();i++) r.push_back(g[i][0]);
			for(int i=0;i<g.size()-1;i++) g[i+1][0]=r[i];
			g[0][0]=u;
		}
		return g;
    }
};
