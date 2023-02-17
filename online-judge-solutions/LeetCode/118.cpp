//https://leetcode.com/problems/pascals-triangle/
//Lang		:	C++
//Time		:	11 ms
//Memory	:	6.5 MB
class Solution{
public:
    vector<vector<int>> generate(int n){
		vector<vector<int>> v;
		vector<int> r;
		for(int i=1;i<=n;i++){
			vector<int> w(i,1);
			if(i>1) for(int k=0;k<r.size()-1;k++) w[k+1]=r[k]+r[k+1];
			for(int x:w) cout<<x<<" ";cout<<endl;
			v.push_back(w);
			r=w;
		}
		return v;
    }
};
