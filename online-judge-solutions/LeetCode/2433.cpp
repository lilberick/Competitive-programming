//https://leetcode.com/problems/find-the-original-array-of-prefix-xor/
//Lang		:	C++
//Time		:	132 ms
//Memory	:	79.3 MB
class Solution{
	public:
		vector<int> findArray(vector<int>& v){
			int x=0;
			vector<int> w;
			for(int i=0;i<v.size();i++){
				w.push_back(v[i]^x);
				x=v[i];
			}
			return w;
		}
};
