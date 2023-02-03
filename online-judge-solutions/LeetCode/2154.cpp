//https://leetcode.com/problems/keep-multiplying-found-values-by-two
//Lang		:	C++
//Time		:	8 ms
//Memory	:	10.6 MB
class Solution{
public:
    int findFinalValue(vector<int>& n,int o){
        for(int i:n){
            if(!(find(begin(n),end(n),o)!=n.end())) break;
            o*=2;
        }
        return o;
    }
};
