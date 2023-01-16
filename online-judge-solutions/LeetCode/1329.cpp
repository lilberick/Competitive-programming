//https://leetcode.com/problems/sort-the-matrix-diagonally/
//Lang		:	C++
//Time		:	52 ms
//Memory	:	8.8 MB
class Solution{
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& v){
		int x=v.size()-1,y=v[0].size()-1;
		vector<int> w;
		for(int d=x-1;d>-y;d--){
			for(int i=0;i<v.size();i++){
				for(int j=0;j<v[i].size();j++) if(i-j==d) w.push_back(v[i][j]);
			}
			sort(rbegin(w),rend(w));
			for(int i=0;i<v.size();i++){
				for(int j=0;j<v[i].size();j++) if(i-j==d){
					v[i][j]=w.back();
					w.pop_back();
				}
			}
		}
		return v;
    }
};
