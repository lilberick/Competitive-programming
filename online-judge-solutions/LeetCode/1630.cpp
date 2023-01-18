//https://leetcode.com/problems/arithmetic-subarrays/
//Lang		:	C++
//Time		:	56 ms
//Memory	:	25.9 MB
class Solution{
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& n,vector<int>& l,vector<int>& r){ 
		vector<bool> q;
		for(int k=0;k<l.size();k++){
			vector<int> v(begin(n)+l[k],begin(n)+r[k]+1);
			sort(begin(v),end(v));
			int p=v[1]-v[0],b=1;
			for(int i=1;i<v.size()-1 && b;i++) if(v[i+1]-v[i]!=p) b--;
			q.push_back(b);
		}
		return q;
    }
};
