//https://leetcode.com/problems/count-operations-to-obtain-zero
//Lang		:	C++
//Time		:	0 ms
//Memory	:	6 MB
class Solution{
public:
    int countOperations(int n1, int n2){
        int c=0;
        while(n1>0 && n2>0){
            if(n1>n2) n1-=n2;
            else n2-=n1;
            c++;
        }
        return c;
    }
};
