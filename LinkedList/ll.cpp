//to implement ll
#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int g){
        this->data=g;
       this->next=NULL;
}
};

node* getnode(int d){
    node *temp=new node(d);
    
    return temp;
}

void insert(node* &head,int d){
    node *temp=getnode(d);
    if(head==NULL){
        head=temp;
        return;
    }
    else{
        node *cur=head;
        while(cur->next!=NULL){
            cur=cur->next;
        }
        cur->next=temp;
    }
}

void insert_at_front(node* &head,int d){
    
    node *temp=getnode(d);
    if(head==NULL){
        head=temp;
        return;
    }
    else{
        temp->next=head;
        head=temp;
    }
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

void delete_node(node* &head,int d){
    node *cur=head;
    node *prev=NULL;
    if(head->data==d){
        head=head->next;
        delete cur;
        return;
    }
    while(cur!=NULL){
        if(cur->data==d){
           prev->next=cur->next;
           delete cur;
           return;
        }
       prev=cur;
       cur=cur->next;
    }
}

int main() {
   node *head=NULL;
    int i;
   do{
      
       cout<<"enter the data to be inserted:"<<endl;
       cin>>i;
       if(i==999)
       break;
       insert(head,i);
   }while(i!=999);
   
   printlist(head);
   cout<<endl;
   //insert_at_front(head,3);
   printlist(head);
   cout<<endl;
   delete_node(head,1);
   printlist(head);
   cout<<endl;
    return 0;
}









