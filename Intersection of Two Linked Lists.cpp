/*  Following is the class structure of the Node class:

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

Node* findIntersection(Node *firstHead, Node *secondHead)
{
unordered_set<Node*>ob;

while(firstHead!=NULL){
        ob.insert(firstHead);
        firstHead=firstHead->next;
    }

    while(secondHead!=NULL){
        if(ob.find(secondHead)!=ob.end()){
            return secondHead;
        } 
        else {
            secondHead = secondHead->next;
        }
    }
        return NULL;
    }

    
