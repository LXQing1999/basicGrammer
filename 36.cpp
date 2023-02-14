/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *merge(ListNode *l1, ListNode *l2)
    {
        // C++中利用已经定义好的结构体，申请一个新链表l3
        auto l3 = new ListNode(-1), tail = l3; // 尾结点暂时指向l3
        while (l1 != NULL && l2 != NULL)
        {
            if (l1->val < l2->val)
            {
                tail->next = l1;
                tail = tail->next;
                l1 = l1->next;
            }
            else
            {
                tail->next = l2;
                tail = tail->next;
                l2 = l2->next;
            }
            if (l1 != NULL)
                tail->next = l1;
            if (l2 != NULL)
                tail->next = l2;
            return l3->next;
        }
    }
};