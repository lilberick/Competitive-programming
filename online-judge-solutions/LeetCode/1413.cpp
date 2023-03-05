//https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum
//Lang		:	C++
//Time		:	5 ms
//Memory	:	7.5 MB
class Solution{
public:
    int minStartValue(vector<int>& n){
		vector<int> v(1,0);
		int minimo=1e9;
		for(int i=0;i<n.size();i++){
			minimo=min(minimo,v.back()+n[i]);
			v.push_back(v.back()+n[i]);
		}
		return minimo<0?-minimo+1:1;
    }
};
