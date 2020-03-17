/*************************************************************************
    > File Name: leetCode_0002.cpp
    > Author: wzy
    > Mail: 1144156906@qq.com 
    > Created Time: 2020年01月06日 星期一 17时37分45秒
 ************************************************************************/

#include <iostream>
#include <memory>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode{
	ListNode(int x){
		val=x;
	}
	int val;
	ListNode *next;
};

//计算链表的和，输了，数字太长，需要换一个思路。
class Solution {
public:
//    struct ListNode* addTwoNumbers(struct ListNode* l1,struct ListNode* l2) {
//        int res=0;
//		int ad=0;
//		int tens=1;
//		while(l1 && l2){
//			int temp;
//			if(ad){
//				temp = l1->val + l2->val + 1;
//				ad = 0;
//			}else{
//				temp = l1->val + l2->val;
//			}
//			if(temp > 10){
//				ad=1;
//				temp = temp-10;
//			}
//			res = res + temp*tens;
//			tens *= 10;
//			l1 = l1->next;
//			l2 = l2->next;
//		}
//		if(ad){
//            res = res + tens;
//        }
//		while(l1){
//			res = res + l1->val * tens;
//			tens *= 10;
//			l1 = l1->next;
//		}
//		while(l2){
//			res = res + l2->val * tens;
//			tens *= 10;
//			l2 = l2->next;
//		}
//		cout << res << endl;
//
//
//		return intToL(res);
//    }

//	struct ListNode* intToL(int x){
//		struct ListNode* n = nullptr;
//		if(x==0){
//			add(&n,0);
//			return n;
//		}
//		while(x){
//			int temp = x%10;
//			add(&n,temp);
//			x=x/10;
//		}
//		return n;
//	}
    struct ListNode* addTwoNumbers(struct ListNode* l1,struct ListNode* l2){
		ListNode prehead(0);
		ListNode *p = &prehead;
		int extra = 0;
		while(l1 || l2 || extra){
			if(l1){
				extra += l1->val;
				l1 = l1->next;
			}

			if(l2){
				extra += l2->val;
				l2 = l2->next;
			}

			p->next = new ListNode(extra%10);
			extra = extra/10;
			p=p->next;
		}
		return prehead.next;
	} 
	
	void print(struct ListNode *l){
		while(l != nullptr){
			cout << l->val ;
			l = l->next;
		}
		cout << endl;
	}

	void add(struct ListNode** l, int val){
		cout << val << endl;
		//struct ListNode* n = (struct ListNode *)malloc(sizeof(struct ListNode));
		ListNode* n = new ListNode(val);
		
		n->next = nullptr;
		n->val = val;
		if(!(*l)){
			*l=n;
			return;
		}
		struct ListNode *current;
		current = *l;
		while(current->next){
			current = current->next;
		}
		current->next = n;
	}
};

int main()
{
	Solution s;

	struct ListNode *l1=nullptr, *l2=nullptr;

	s.add(&l1,2);
	s.add(&l1,4);
	s.add(&l1,3);
	s.add(&l2,5);
	s.add(&l2,6);
	s.add(&l2,4);
	s.print(l1);
	s.print(l2);

	s.print(s.addTwoNumbers(l1,l2));

	free(l1);
	free(l2);
	l1 = l2 = nullptr;
	return 0;
}
