//https://leetcode.com/problems/find-triangular-sum-of-an-array
//Lang		:	C++
//Time		:	623 ms
//Memory	:	379 MB
class Solution{
public:
    int triangularSum(vector<int>& v){
		while(v.size()>1){
			vector<int> w;
			for(int i=0;i<v.size()-1;i++) w.push_back((v[i]+v[i+1])%10);
			swap(v,w);
		}
		return v[0];
    }
};
