//https://leetcode.com/problems/minimum-absolute-difference
//Lang		:	C++
//Time		:	82 ms
//Memory	:	32.2 MB
class Solution{
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& a){
		sort(begin(a),end(a));
		int m=1e7;
		for(int i=1;i<a.size();i++) m=min(m,a[i]-a[i-1]);
		vector<vector<int>> v;
		for(int i=1;i<a.size();i++) if(a[i]-a[i-1]==m) v.push_back({a[i-1],a[i]});
		return v;
    }
};
