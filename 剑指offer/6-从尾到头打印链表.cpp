#include <iostream>
#include <vector>
#include <stack>
using std::vector; using std::cout; using std::endl; using std::stack;
struct ListNode
{
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) { }
};

vector<int> printListFromTailToHead(ListNode* head)
{
    vector<int> result;
    stack<int> stack;
    while(head!=NULL)
    {
        stack.push(head->val);
        head=head->next;
    }
    while(!stack.empty())
    {
        result.push_back(stack.top());
        stack.pop();
    }
    return result;
}

ListNode init_list(vector<int> iv)
{
    int size=iv.size();
    ListNode list(iv[0]);
    ListNode *p = &list;
    for(int i=1;i<size;++i) 
    {
        p->next =new ListNode(iv[i]);
        p = p->next;
    }
    return list;
}

void print(ListNode list)
{
    ListNode *p = &list;
    while(p!=NULL)
    {
        cout <<p->val <<" ";
        p = p->next;
    }
    cout << endl;
}

void print(vector<int> iv)
{
    for(auto i : iv)
        cout << i << " ";
    cout << endl;
}
int main()
{
    ListNode lst = init_list({1,2,3,4});
    print(lst);
    print(printListFromTailToHead(&lst));
    return 0;
}