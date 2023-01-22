//https://leetcode.com/problems/maximum-number-of-coins-you-can-get
//Lang		:	C++
//Time		:	194 ms
//Memory	:	53.5 MB
class Solution{
public:
    int maxCoins(vector<int>& v){
		sort(rbegin(v),rend(v));
		int s=0;
		for(int i=0;i<v.size()/3;i++) s+=v[i*2+1];
		return s;
    }
};
