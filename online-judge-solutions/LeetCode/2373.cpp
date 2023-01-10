//https:leetcode.com/problems/largest-local-values-in-a-matrix
//Lang		:	C++
//Time		:	15 ms
//Memory	:	11.9 MB
class Solution{
	public:
		vector<vector<int>> largestLocal(vector<vector<int>>& v){
			vector<vector<int>> w;
			for(int i=0;i<v.size()-2;i++){
				vector<int> r;
				for(int j=0;j<v[i].size()-2;j++){
					int x=0;
					for(int k=i;k<i+3;k++){
						for(int l=j;l<j+3;l++) x=max(x,v[k][l]);
					}
					r.push_back(x);
				}
				w.push_back(r);
			}
			return w;
		}
};
