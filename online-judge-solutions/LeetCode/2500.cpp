//https://leetcode.com/problems/delete-greatest-value-in-each-row
//Lang		:	C++
//Time		:	9 ms
//Memory	:	9.5 MB
class Solution{
public:
	int deleteGreatestValue(vector<vector<int>>& v){
		for(int i=0;i<v.size();i++) sort(begin(v[i]),end(v[i]));
		int s=0;
		for(int j=0;j<v[0].size();j++){
			int m=0;
			for(int i=0;i<v.size();i++) m=max(m,v[i][j]);
			s+=m;
		}
		return s;
	}
};
