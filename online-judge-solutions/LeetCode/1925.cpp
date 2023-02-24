//https://leetcode.com/problems/count-square-sum-triples
//Lang		:	C++
//Time		:	0 ms
//Memory	:	6.1 MB
class Solution{
public:
    int countTriples(int n){
		vector<int> v={5,13,17,25,29,37,41,53,61,65,73,85,89,97,101,109,113,125,137,145,149,157,169,173,181,185,193,197,205,221,229,233,241};
		v.insert(end(v),{65,85,145,185,205,221});//combinando
		int s=0;
		for(int i:v) s+=n/i;
        return 2*s;
    }
};
