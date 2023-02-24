//https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold
//Lang		:	C++
//Time		:	104 ms
//Memory	:	55.4 MB
class Solution{
public:
    int numOfSubarrays(vector<int>& a,int k,int t){
		int s=accumulate(begin(a),begin(a)+k,0),r=0;
		if(s/k>=t) r++;
		for(int i=k;i<a.size();i++){
			s+=a[i]-a[i-k];
			if(s/k>=t) r++;
		}
		return r;
    }
};
