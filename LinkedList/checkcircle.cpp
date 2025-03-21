#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
void InsertAtHead(node* &head,int data)
{
    node* temp=new node(data);
    temp->next=head;
    head=temp;
}

void InsertAtTail(node* &tail,int data)
{
    node* temp=new node(data);
    tail->next=temp;
    tail=temp;
}
void InsertAtPosition(node* &tail, node* & head, int position, int d) {


    
    if(position == 1) {
        InsertAtHead(head, d);
        return;
    }

    node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //Inserting at Last Position
    if(temp -> next == NULL) {
        InsertAtTail(tail,d);
        return ;
    }

    //creating a node for d
    node* nodeToInsert = new node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}
node* floydDetectLoop(node* head) {

    if(head == NULL)
        return NULL;

    node* slow = head;
    node* fast = head;

    while(slow != NULL && fast !=NULL) {
        
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast) {
            return slow;
        }
    }

    return NULL;

}
void printlist(node *head){
    node *cur=head;
    while(cur->next!=NULL){
        cout<<cur->data<<"--->";
        cur=cur->next;
    }
    cout<<cur->data;
    return;
}
int main()
{
    node* head=NULL;
    node* tail=NULL;

    InsertAtPosition(tail,head,1,1);
    tail=head;
    InsertAtPosition(tail,head,2,2);
    InsertAtPosition(tail,head,3,3);
    InsertAtPosition(tail,head,4,4);
    InsertAtPosition(tail,head,5,5);
    InsertAtPosition(tail,head,6,6);
    InsertAtPosition(tail,head,7,7);
    tail->next=head->next;
    //cout<<(floydDetectLoop(head))->data<<" ";
    //printlist(head);
    if(floydDetectLoop(head)!=NULL)
    {
        cout<<"Circular";
    }
    else{
        cout<<"Not circular";
    }

    return 0;
}