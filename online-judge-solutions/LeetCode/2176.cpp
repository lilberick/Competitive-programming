//https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array
//Lang		:	C++
//Time		:	15 ms
//Memory	:	11.9 MB
class Solution{
	public:
	    int countPairs(vector<int>& v, int k){
		int r=0;
		for(int i=0;i<v.size();i++){
		    for(int j=i+1;j<v.size();j++){
			if(v[i]==v[j] && (i*j)%k==0) r++;
		    }
		}
		return r;
	    }
};
