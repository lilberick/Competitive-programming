//https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order
//Lang		:	C++
//Time		:	48 ms
//Memory	:	35 MB
class Solution{
public:
    vector<int> minSubsequence(vector<int>& v){
		sort(begin(v),end(v));
		vector<int> w;
		for(int i=0;i<v.size();i++){
			int a=accumulate(begin(v),begin(v)+i,0);
			int b=accumulate(begin(v)+i,end(v),0);
			vector<int> t;
			if(b>a){
				t.insert(end(t),begin(v)+i,end(v));
				swap(t,w);
			}
		}
		sort(rbegin(w),rend(w));
		return w;
    }
};
