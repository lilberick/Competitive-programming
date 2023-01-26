//https://leetcode.com/problems/maximum-number-of-pairs-in-array
//Lang		:	C++
//Time		:	11 ms
//Memory	:	9.4 MB
class Solution{
public:
    vector<int> numberOfPairs(vector<int>& n){
        map<int,int> m;
        for(int i:n) m[i]++;
        int p=0,l=0;
        for(auto i=m.begin();i!=m.end();i++){
            p+=(i->second)/2;
			l+=(i->second)%2;
        }
		return {p,l};
    }
};
