//https://leetcode.com/problems/permutations/
//Lang		:	C++
//Time		:	0 ms
//Memory	:	7.5 MB
class Solution{
public:
    vector<vector<int>> permute(vector<int>& v){
		vector<vector<int>> w;
		sort(begin(v),end(v));
        do{w.push_back(v);}while(next_permutation(begin(v),end(v)));
        return w;
    }
};
