//https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing
//Lang		:	C++
//Time		:	19 ms
//Memory	:	16.4 MB
class Solution{
public:
    int minOperations(vector<int>& v){
		vector<int> w;
		w=v;
		for(int i=1;i<w.size();i++) if(w[i]<=w[i-1]) w[i]=w[i-1]+1;
		int s=0;
		for(int i=1;i<v.size();i++) s+=w[i]-v[i];
		return s;
    }
};
