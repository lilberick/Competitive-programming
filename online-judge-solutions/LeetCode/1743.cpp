//https://leetcode.com/problems/restore-the-array-from-adjacent-pairs
//Lang		:	C++
//Time		:	739 ms
//Memory	:	115.1 MB
class Solution{
public:
    vector<int> restoreArray(vector<vector<int>>& v){
		map<int,vector<int>> m;
		for(auto i:v){
			m[i[0]].push_back(i[1]);
			m[i[1]].push_back(i[0]);
		}
		vector<int> r;
		for(auto i=m.begin();i!=m.end();i++){
			if(i->second.size()==1){
				r.push_back(i->first);
				r.push_back(i->second[0]);
				break;
			}
		}
		while(r.size()!=v.size()+1){
			int x=r.back();
			m[x][0]==r[r.size()-2]?r.push_back(m[x][1]):r.push_back(m[x][0]);
		}
		return r;
    }
};
