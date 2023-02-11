//https://leetcode.com/problems/find-the-difference-of-two-arrays
//Lang		:	C++
//Time		:	167 ms
//Memory	:	30.1 MB
class Solution{
public:
    vector<vector<int>> findDifference(vector<int>& n1,vector<int>& n2){
		set<int> a,b;
		for(int i:n1) if(!(find(begin(n2),end(n2),i)!=end(n2))) a.insert(i);
		for(int i:n2) if(!(find(begin(n1),end(n1),i)!=end(n1))) b.insert(i);
		vector<vector<int>> v;
		v.push_back(vector<int>(begin(a),end(a)));
		v.push_back(vector<int>(begin(b),end(b)));
		return v;
    }
};
