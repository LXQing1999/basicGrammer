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
    ListNode x0 = ListNode(-1); // -1-->1->4->6->8
    // head = &ListNode(-1); 不可行，右边是临时变量，地址不可用
    head = &x0;
    point = head;

    int value;
    while (cin >> value && value != -1)
    {
        ListNode xN = ListNode(value);
        point->next = &xN;
        point = point->next;
    }

    point = head;

    while (point != NULL)
    {
        cout << point->val << "->";
        point = point->next;
    }
    cout << endl;
    return 0;
}