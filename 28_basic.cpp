#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        *(node) = *(node->next);
    }
};

int main()
{
    Solution p;
    ListNode q = ListNode(1); // 1->4->6->8
    cout << q.val << "  " << q.next << endl;

    ListNode *head, *point;
    ListNode x0 = ListNode(-1),
             x1 = ListNode(1),
             x2 = ListNode(4),
             x3 = ListNode(6),
             x4 = ListNode(8); // -1-->1->4->6->8
    // head = &ListNode(-1); 不可行，右边是临时变量，地址不可用
    head = &x0;
    point = head;

    head->next = &x1;
    head->next->next = &x2;
    head->next->next->next = &x3;
    head->next->next->next->next = &x4;
    while (point != NULL)
    {
        cout << point->val << "->";
        point = point->next;
    } // 打印出原链表
    cout << endl;

    p.deleteNode(head->next->next); // delete x2 = 4
    point = head;

    while (point != NULL)
    {
        cout << point->val << "->";
        point = point->next;
    }
    cout << endl;

    return 0;
}