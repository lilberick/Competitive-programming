//https://leetcode.com/problems/number-of-arithmetic-triplets
//Lang		:	C++
//Time		:	0 ms
//Memory	:	8.6 MB
class Solution{
	public:
		int arithmeticTriplets(vector<int>& v, int d){
			int r=0;
			for(int i=0;i<v.size()-2;i++){
				if(find(begin(v),end(v),v[i]+d)!=end(v) && find(begin(v),end(v),v[i]+2*d)!=end(v)) r++;
			}
			return r;
		}
};
