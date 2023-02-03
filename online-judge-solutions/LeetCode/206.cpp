//https://leetcode.com/problems/reverse-linked-list
//Lang		:	C++
//Time		:	24 ms
//Memory	:	8.8 MB
void insertar(ListNode *&h,int x){
	ListNode *n=new ListNode(x),*c=h;
	if(!h){h=n;return;}
	while(c->next) c=c->next;
	c->next=n;
}
class Solution{
public:
    ListNode* reverseList(ListNode* h){
		vector<int> v;
		ListNode *w=nullptr;
		for(auto *i=h;i;i=i->next) v.push_back(i->val);
		for(int i=v.size()-1;i>=0;i--){
			insertar(w,v[i]);
		}
		return w;
    }
};
