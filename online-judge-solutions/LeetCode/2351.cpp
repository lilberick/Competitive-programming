//https://leetcode.com/problems/first-letter-to-appear-twice
//Lang		:	C++
//Time		:	3 ms
//Memory	:	6.1 MB
class Solution{
public:
    char repeatedCharacter(string s){
        map<char,int> m;
        char d;
        for(char c:s){
            m[c]++;
            if(m[c]>1){d=c;break;}
        }
        return d;
    }
};
