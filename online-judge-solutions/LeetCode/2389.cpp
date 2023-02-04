//https://leetcode.com/problems/longest-subsequence-with-limited-sum
//Lang		:	C++
//Time		:	48 ms
//Memory	:	13.8 MB
class Solution{
public:
    vector<int> answerQueries(vector<int>& n,vector<int>& q){
		n.push_back(1e9);
		sort(begin(n),end(n));
		vector<int> v;
		for(int x:q){
			int s=0;
			v.push_back(0);
			for(int i=0;i<n.size();i++){
				s+=n[i];
				v.back()=i;
				if(x<s) break;
			}
		}
		return v;
    }
};
