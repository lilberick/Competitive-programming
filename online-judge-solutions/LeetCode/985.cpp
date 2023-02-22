//https://leetcode.com/problems/sum-of-even-numbers-after-queries
//Lang		:	C++
//Time		:	136 ms
//Memory	:	49.8 MB
class Solution{
public:
    vector<int> sumEvenAfterQueries(vector<int>& n,vector<vector<int>>& q){
		vector<int> r;
		int s=accumulate(begin(n),end(n),0,[](int a,int b){return b%2==0?a+b:a;});
		for(auto i:q){
			int w=n[i[1]];
			n[i[1]]+=i[0];
			(n[i[1]]%2==0)?s+=(w%2==0)?i[0]:n[i[1]]:s-=(w%2==0)?w:0;
			r.push_back(s);
		}
		return r;
    }
};
