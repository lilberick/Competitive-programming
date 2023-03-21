//https://leetcode.com/problems/k-closest-points-to-origin
//Lang		:	C++
//Time		:	336 ms
//Memory	:	98.7 MB
class Solution{
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p,int k){
		map<double,vector<vector<int>>> m;
		for(auto i:p){
			double h=hypot(i[0],i[1]);
			m[h].push_back(i);
		}
		int t=0;
		vector<vector<int>> v;
		for(auto i=m.begin();i!=m.end() && t<k;i++){
			for(auto j:i->second){
				v.push_back(j);
				if(t>k) break;
				t++;
			}
		}
		return v;
    }
};
