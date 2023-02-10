//https://leetcode.com/problems/equal-row-and-column-pairs
//Lang		:	C++
//Time		:	98 ms
//Memory	:	37.3 MB
vector<vector<int> > transpose(const vector<vector<int> > &b){
    vector<vector<int> > trans_vec(b[0].size(), vector<int>());
    for (int i=0;i<b.size();i++){
		for(int j=0;j<b[i].size();j++) trans_vec[j].push_back(b[i][j]);
    }
    return trans_vec;
}
class Solution{
public:
    int equalPairs(vector<vector<int>>& g){
		map<vector<int>,int> m;
		for(auto i:g) m[i]++;
		g=transpose(g);
		int s=0;
		for(auto i:g) s+=m[i];
		return s;
    }
};
