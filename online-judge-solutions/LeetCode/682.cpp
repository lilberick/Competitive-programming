//https://leetcode.com/problems/baseball-game
//Lang		:	C++
//Time		:	4 ms
//Memory	:	8.3 MB
class Solution{
public:
    int calPoints(vector<string>& o){
		vector<int> w;
        for(string s:o){
            if(s=="C") w.pop_back();
            else if(s=="D") w.push_back(w.back()*2);
            else if(s=="+") w.push_back(w[w.size()-2]+w.back());
            else{
                int n=stoi(s);
				w.push_back(n);
            }
        }
		return accumulate(begin(w),end(w),0);
    }
};
