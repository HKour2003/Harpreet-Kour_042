#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*/

#include<unordered_set>
using namespace std;
bool isPalindrome(LinkedListNode<int> *head) {
    vector<int> v;
    LinkedListNode<int> *temp = head;
    while(temp != NULL) {
        v.push_back(temp->data);
        temp = temp->next;
    }
    int start=0;
    int end=v.size()-1;
    while(start<end){
        if (v[start] != v[end]) {
          return false;
        }
          start++;
          end--;
    }
        return true;
    }
