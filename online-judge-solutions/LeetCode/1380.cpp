//https://leetcode.com/problems/lucky-numbers-in-a-matrix
//Lang		:	C++
//Time		:	19 ms
//Memory	:	11.7 MB
class Solution{
public:
    vector<int> luckyNumbers (vector<vector<int>>& m){
		vector<int> r,c;
		for(int i=0;i<m.size();i++){
			int mr=1e6;
			for(int j=0;j<m[0].size();j++) mr=min(mr,m[i][j]);
			r.push_back(mr);
		}
		for(int j=0;j<m[0].size();j++){
			int mc=0;
			for(int i=0;i<m.size();i++) mc=max(mc,m[i][j]);
			c.push_back(mc);
		}
		vector<int> v;
		for(int i:c) if(find(begin(r),end(r),i)!=end(r)){v.push_back(i);}
		return v;
    }
};
