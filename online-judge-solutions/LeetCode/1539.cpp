//https://leetcode.com/problems/kth-missing-positive-number
//Lang		:	C++
//Time		:	27 ms
//Memory	:	13.9 MB
class Solution{
public:
    int findKthPositive(vector<int>& a,int k){
		map<int,int> m;
		vector<int> v;
		for(int i:a) m[i]++;
		for(int i=1;i<=a.back()+k;i++) if(m[i]<1) v.push_back(i);
		return v[k-1];
    }
};
