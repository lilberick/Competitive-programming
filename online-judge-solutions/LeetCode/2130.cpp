//https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list
//Lang		:	C++
//Time		:	847 ms
//Memory	:	153 MB
ListNode *inverso(ListNode *h){
	if(!h || !h->next) return h;
	ListNode *r=inverso(h->next);
	h->next->next=h;
	h->next=NULL;
	return r;
}
ListNode *copiar(ListNode *h){
	if(!h) return NULL;
	ListNode *n=new ListNode(h->val);
	n->next=copiar(h->next);
	return n;
}
class Solution{
	public:
		int pairSum(ListNode *h){
			ListNode *r=copiar(h);
			r=inverso(r);
			int n=0,s=0,k=0;
			for(auto *i=h;i;i=i->next) n++;
			for(auto *i=h,*j=r;i && k<=n/2;i=i->next,j=j->next){
				s=max(s,i->val+j->val);
				k++;
			}
			return s;
		}
};
