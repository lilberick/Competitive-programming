//https://leetcode.com/problems/rearrange-array-elements-by-sign/
//Lang		:	C++
//Time		:	254 ms
//Memory	:	140.7 MB
class Solution{
public:
    vector<int> rearrangeArray(vector<int>& v){
		vector<int> l,r,w;
		for(int i:v) i<0?l.push_back(i):r.push_back(i);
		for(int i=0;i<v.size()/2;i++){
			w.push_back(r[i]);
			w.push_back(l[i]);
		}
		return w;
    }
};
