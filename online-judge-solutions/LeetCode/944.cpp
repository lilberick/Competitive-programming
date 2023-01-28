//https://leetcode.com/problems/delete-columns-to-make-sorted
//Lang		:	C++
//Time		:	111 ms
//Memory	:	20.2 MB
class Solution{
public:
    int minDeletionSize(vector<string>& v){
        int n=0;
       	for(int j=0;j<v[0].size();j++){
		    string w,r;
		    for(int i=0;i<v.size();i++) w+=v[i][j];
		    r=w;
		    sort(begin(r),end(r));
		    if(r!=w) n++;
	    } 
        return n;
    }
};
