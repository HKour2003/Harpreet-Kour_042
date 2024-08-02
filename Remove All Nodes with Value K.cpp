#include <bits/stdc++.h> 
/****************************************************************
    Following is the Linked List node structure

    class Node {
    public:
        int data;
        Node *next;
        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

Node *removeNodes(Node *head, int k) {



    if(head==NULL) 
        return NULL;
    while(head != NULL && head->data==k) 
        head=head->next;
    Node* curr=head;
    Node* prev=NULL;
    while(curr!=NULL){
        if(curr->data==k){
            prev->next=curr->next;
        } else {
            prev = curr;
        }
        curr = curr->next;
    }
    return head;
}
