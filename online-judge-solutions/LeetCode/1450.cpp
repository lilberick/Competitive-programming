//Number of Students Doing Homework at a Given Time
//Lang		:	C++
//Time		:	4 ms
//Memory	:	10.9 MB
class Solution{
public:
    int busyStudent(vector<int>& s,vector<int>& e,int q){
        int r=0;
        for(int i=0;i<s.size();i++) if(s[i]<=q && e[i]>=q){r++;}
        return r;
    }
};
