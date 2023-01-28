//https://leetcode.com/problems/middle-of-the-linked-list
//Lang		:	C++
//Time		:	0 ms
//Memory	:	7.1 MB
void insertar(ListNode *&h,int x){
	ListNode *n=new ListNode(x),*c=h;
	if(!h){h=n;return;}
	while(c->next) c=c->next;
	c->next=n;
}
class Solution{
public:
    ListNode* middleNode(ListNode* h){
        int s=0,t=0;
        ListNode *g=nullptr;
	    for(auto *i=h;i;i=i->next) s++;
        for(auto *i=h;i;i=i->next){
		    if(t>=s/2) insertar(g,i->val);
		    t++;
	    };
        return g;
    }
};
