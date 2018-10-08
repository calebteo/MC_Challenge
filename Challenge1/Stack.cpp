#include"Stack.h"

Stack::Stack()
{
    next = NULL;
    value = -1; 
    count = 0; 
}

Stack::Stack(int i, Stack* ptr)
{
    next = ptr; 
    value = i; 
    count = 1; 
}

Stack* Stack::AddtoStack(int i, Stack**root)
{
    Stack* findI = SearchStack(i, *root);
    if (!findI)
    {
        Stack* newRoot = new Stack(i, *root); 
        *root = newRoot;
        return NULL; 
    }
    return findI;
}

Stack* Stack::SearchStack(int i, Stack*root)
{
    if (root == NULL)
    {
        return NULL; 
    }
    else 
    {
        if (i == root->value)
        {
            return root;
        }
        else 
        {
            return SearchStack(i, root->next); 
        }
    }
}

void Stack::printStack(Stack* root)
{
    Stack* curr = root; 
    while(curr != NULL)
    {
        cout << curr->value << " : " << curr->count << endl;
        curr = curr->next;
    }
}

Stack* Stack::FindMaxCount(Stack* root)
{
    Stack* Max = root; 
    Stack* curr = root; 
    while (curr != NULL)
    {
        if (Max->count < curr->count)
        {
            Max = curr; 
        }
        curr = curr->next;
    }
    return Max;
}

Stack::~Stack()
{
    Stack* toDel = next;
    while (toDel != NULL)
    {
        Stack* nextDel = toDel->next; 
        delete toDel; 
        toDel = nextDel;
    }
    delete toDel;
}