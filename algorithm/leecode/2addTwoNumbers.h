#pragma once
#include <common.h>
//两数相加
//输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
//输出：7 -> 0 -> 8
//原因：342 + 465 = 807
 
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

// l1  2 4 3
// l2  7 0 8


class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* dummyHead = new ListNode(0);
		ListNode* curr = dummyHead;
		ListNode* p = l1;
		ListNode* q = l2;
		int carry = 0;
		while (p != nullptr || q != nullptr) {
			int x = (p != nullptr) ? p->val : 0;
			int y = (q != nullptr) ? q->val : 0;
			int sum = carry + x + y;
			carry = sum / 10; //更新进位
			curr->next = new ListNode(sum % 10);
			curr = curr->next;
			if (p != nullptr) p = p->next;
			if (q != nullptr) q = q->next;
			
		}
		if (carry > 0) {
			curr->next = new ListNode(carry);
		}
		return dummyHead->next;
	}
};



