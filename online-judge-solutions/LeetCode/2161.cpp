//https://leetcode.com/problems/partition-array-according-to-given-pivot/
//Lang		:	C++
//Time		:	206 ms
//Memory	:	136.2 MB
class Solution{
public:
    vector<int> pivotArray(vector<int>& n,int p){
		vector<int> l,m,r,v;
		for(int i=0;i<n.size();i++) n[i]<p?l.push_back(n[i]):(n[i]==p?m.push_back(n[i]):r.push_back(n[i]));
		v=l;
		v.insert(end(v),begin(m),end(m));
		v.insert(end(v),begin(r),end(r));
		return v;
    }
};
