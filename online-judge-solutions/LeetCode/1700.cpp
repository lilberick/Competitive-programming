//https://leetcode.com/problems/number-of-students-unable-to-eat-lunch
//Lang		:	C++
//Time		:	16 ms
//Memory	:	9.8 MB
class Solution{
public:
    int countStudents(vector<int>& a,vector<int>& b){
		deque<int> t(begin(a),end(a)),s(begin(b),end(b));
		int n=a.size()*b.size();
		while(n-- && t.size()>0){
			if(t[0]==s[0]){t.pop_front();s.pop_front();}
			else{t.push_back(t[0]);t.pop_front();}
		}
		return t.size();
    }
};
