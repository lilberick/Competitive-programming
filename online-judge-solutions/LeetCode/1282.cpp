//https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/
//Lang		:	C++
//Time		:	10 ms
//Memory	:	13.3 MB
class Solution{
	public:
	vector<vector<int>> groupThePeople(vector<int>& v){
		vector<vector<int>> w(v.size()+1),p;
		for(int i=0;i<v.size();i++){
			w[v[i]].push_back(i);
			if(w[v[i]].size()==v[i]){
				p.push_back({});
				swap(p.back(),w[v[i]]);
			}
		}
		return p;
	}
};
