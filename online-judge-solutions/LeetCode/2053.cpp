//https://leetcode.com/problems/kth-distinct-string-in-an-array
//Lang		:	C++
//Time		:	335 ms
//Memory	:	13.9 MB
class Solution {
public:
    string kthDistinct(vector<string>& a, int k){
		vector<string> v;
		for(string s:a) if(count(begin(a),end(a),s)==1) v.push_back(s);
		return (k>v.size())?"":v[k-1];
    }
};
