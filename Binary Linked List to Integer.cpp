/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

************************************************************/
#include<math.h>
int binaryToInteger(int n, Node *head) {
    //    Write your code here
    Node *p=head;
    int dec=0;
    while(p!=NULL){
        n--;
        int x=p->data;
        dec=dec+x*pow(2,n);
        p=p->next;

    }
    return dec;






}
