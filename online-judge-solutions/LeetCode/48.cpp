//https://leetcode.com/problems/rotate-image
//Lang		:	C++
//Time		:	6 ms
//Memory	:	7.1 MB
class Solution{
public:
    void rotate(vector<vector<int>>& m){
		vector<vector<int>> v(m.size(),vector<int>(m.size()));
		for(int i=0;i<m.size();i++){
			for(int j=0;j<m[0].size();j++) v[i][j]=m[m.size()-j-1][i];
		}
		m=v;
    }
};
