/*
    Following is the class structure of the Node class:
        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };

*/
#include<unordered_set>
using namespace std;
bool detectCycle(Node *head)
{
    unordered_set<Node*> obj;
    Node *temp=head;
    while(temp!=NULL){
        if(obj.find(temp)!=obj.end()){
            return true;

        } else {
            obj.insert(temp);
            temp = temp->next;
        }
    }
    return false;
}
