//https://leetcode.com/problems/single-number-iii
//Lang		:	C++
//Time		:	10 ms
//Memory	:	11.1 MB
class Solution{
public:
    vector<int> singleNumber(vector<int>& n){
		map<int,int> m;
		for(int i:n) m[i]++;
		vector<int> v;
		for(auto i=m.begin();i!=m.end();i++) if(i->second==1) v.push_back(i->first);
		return v;
    }
};
