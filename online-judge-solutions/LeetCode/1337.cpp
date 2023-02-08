//https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix
//Lang		:	C++
//Time		:	15 ms
//Memory	:	10.6 MB
class Solution{
public:
    vector<int> kWeakestRows(vector<vector<int>>& m,int k){
		vector<pair<int,int>> v;
		for(int i=0;i<m.size();i++) v.push_back(make_pair(count(begin(m[i]),end(m[i]),1),i));
		sort(begin(v),end(v));
		vector<int> w;
		for(int i=0;i<k;i++) w.push_back(v[i].second);
		return w;
    }
};
