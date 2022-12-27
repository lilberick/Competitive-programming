//https://leetcode.com/problems/max-increase-to-keep-city-skyline/description/
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	10.1 MB
class Solution{
	public:
	int maxIncreaseKeepingSkyline(vector<vector<int>>& v){
		int s=0;
		for(int i=0;i<v.size();i++){
			for(int j=0;j<v[0].size();j++){
				int max_row=0,max_col=0;
				for(int k=0;k<v[0].size();k++){
					max_row=max(max_row,v[i][k]);
					max_col=max(max_col,v[k][j]);
				}
				s+=min(max_row,max_col)-v[i][j];
			}
		}
		return s;
	}
};
