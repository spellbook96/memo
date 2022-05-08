#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if(l1==NULL)
            return l2;
    if(l2==NULL)
        return l1;
    
    ListNode *head,*p1,*p2,*p3;
    if(l1->val > l2->val)
    {
        head = l2;
        p1 = l1;
        p2 = l2->next;
    }
    else
    {
        head = l1;
        p1 = l1->next;
        p2 = l2;
    }
    p3=head;
    while(p1!=NULL || p2!=NULL )
    {
        if(p1==NULL)
        {
            p3->next = p2;
            p2 = p2->next;
        }
        else if(p2==NULL)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else if(p1->val > p2->val)
        {
            p3->next = p2;
            p2 = p2->next;
        }
        else
        {
            p3->next = p1;
            p1= p1->next;
        }
        p3 = p3->next;
    }
    return head;
}
int main(void)
{
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(4);
    ListNode* l2 = new ListNode(1);
    l2->next = new ListNode(2);
    l2->next->next = new ListNode(3);
    ListNode * tmp = mergeTwoLists(l1,l2);
    return 0;
}