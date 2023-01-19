//https://leetcode.com/problems/difference-between-ones-and-zeros-in-row-and-column/
//Lang		:	C++
//Time		:	812 ms
//Memory	:	179.1 MB
class Solution{
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& v){
		vector<vector<int>> w(v);
		map<int,int> f1,c1,f0,c0;
		for(int i=0;i<v.size();i++){
			for(int j=0;j<v[i].size();j++){
				if(v[i][j]==1) f1[i]++;
				if(v[i][j]==0) f0[i]++;
			}
		}
		for(int j=0;j<v[0].size();j++){
			for(int i=0;i<v.size();i++){
				if(v[i][j]==1) c1[j]++;
				if(v[i][j]==0) c0[j]++;
			}
		}
		for(int i=0;i<v.size();i++) for(int j=0;j<v[i].size();j++) w[i][j]=f1[i]+c1[j]-f0[i]-c0[j];
		return w;
    }
};
