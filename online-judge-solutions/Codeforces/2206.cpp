//https://leetcode.com/problems/divide-array-into-equal-pairs
//Lang		:	C++
//Time		:	18 ms
//Memory	:	14.7 MB
class Solution{
public:
    map<int,int> m;
    bool divideArray(vector<int>& n){
        for(int i:n) m[i]++;
        bool b=true;
        for(auto i=m.begin();i!=m.end();i++){
            if(i->second%2!=0) b=false;
        }
        return b;
    }
};
