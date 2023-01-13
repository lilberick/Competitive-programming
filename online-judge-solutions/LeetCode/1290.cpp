//https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer
//Lang		:	C++
//Time		:	0 ms
//Memory	:	8.4 MB
class Solution{
public:
	int getDecimalValue(ListNode* h){
		int n=0,s=0;
		for(auto *i=h;i;i=i->next) n++;
		for(auto *i=h;i;i=i->next) s+=(i->val)*pow(2,--n);
		return s;
	}
};
