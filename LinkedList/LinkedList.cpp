#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data =data;
        this->next=NULL;
    }
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};


void InsertAtHead(Node* &head,int data)
{
    Node* temp =new Node(data);
    temp->next =head;
    head=temp;
}
void InsertAtTail(Node* &tail, int d) {
   Node* temp = new Node(d);
   tail -> next = temp;
   tail  = temp;
}
void print(Node* &head)
{
    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
void InsertAtPosition(Node* &tail, Node* & head, int position, int d) {


    
    if(position == 1) {
        InsertAtHead(head, d);
        return;
    }

    Node* temp  = head;
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
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}

void deleteNode(int position, Node* & head,Node* & tail) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        if(curr->next==NULL)
        {
            tail=prev;
        }
        curr -> next  = NULL;
        delete curr;
    }
}
int main() {
    int ch = 1;  // Initialize ch with a valid value
    Node* head = NULL;
    Node* tail = NULL;

    while (ch) {
        cout << "What operation do you wish to perform?\n";
        cout << "1. Insert  2. Delete  3. Print  4. Exit\n";
        cin >> ch;

        switch (ch) {
            case 1: {  // Insert
                int pos = 0, data = 0;
                cout << "Enter the position and element to be inserted: ";
                cin >> pos >> data;

                if (head == NULL) { 
                    // First element, initialize head and tail
                    head = new Node(data);
                    tail = head;
                } else {
                    InsertAtPosition(tail, head, pos, data);
                }
                break;
            }

            case 2: {  // Delete
                int pos;
                cout << "Enter the position to delete: ";
                cin >> pos;

                if (head == NULL) {
                    cout << "List is empty. Cannot delete." << endl;
                } else {
                    deleteNode(pos, head,tail);
                    if (head == NULL) {  
                        tail = NULL;
                    }
                }
                break;
            }

            case 3: {
                print(head);
                break;
            }

            case 4:
                cout << "Exiting program." << endl;
                ch = 0;
                break;

            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}
