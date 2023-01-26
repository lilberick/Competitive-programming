//https://leetcode.com/problems/sum-of-unique-elements
//Lang		:	C++
//Time		:	0 ms
//Memory	:	8.2 MB
class Solution{
public:
    int sumOfUnique(vector<int>& n){
        map<int,int> m;
        for(int i:n) m[i]++;
        int s=0;
        for(auto i=m.begin();i!=m.end();i++) if(i->second==1) s+=i->first;
        return s;
    }
};
