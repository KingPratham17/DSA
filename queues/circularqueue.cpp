#include<iostream>
using namespace std;
class Queue {
    
    int* arr;
    int qfront;
    int rear; 
    int size;
    
    public:
    Queue() {
        size = 5;
        arr = new int[size];
        qfront = -1;
        rear = -1;
    }


    bool isEmpty() {
       if(qfront==-1 && rear==-1)
       {
        return true;
       }
       return false;
    }

    void enqueue(int data) {
       if((qfront==0 && rear==size-1)||(qfront==(rear+1) %size ))
       {
        cout<<"Queue Is full";
        return;
       }
       else if(qfront==-1 && rear==-1)
       {
        qfront=rear=0;
       }
       else{
        rear=(rear+1)%size;
       }
       arr[rear]=data;
    }

    int dequeue() {
        if(qfront==-1 && rear==-1)
        {
            cout<<"no element to remove"<<endl;
            return -1;
        }
        else{
        int ans = arr[qfront];
        arr[qfront] = -1;
        if(qfront == rear) {
            qfront = rear = -1;
        }
        else{
            qfront=(qfront+1)%size;
        }
        return ans;
    }
    }

    int front() {
        if(qfront==-1) {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
};

int main() {
    Queue q;
    int choice = -1;
    int value;

    cout << "***** Queue Operations Menu *****\n";

    while (choice != 0) {
        cout << "\nChoose an operation:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Front\n";
        cout << "4. Check if Empty\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to enqueue: ";
            cin >> value;
            q.enqueue(value);
            break;
        case 2:
            value = q.dequeue();
            if (value == -1)
                cout << "Queue is empty. Cannot dequeue.\n";
            else
                cout << "Dequeued: " << value << endl;
            break;
        case 3:
            value = q.front();
            if (value == -1)
                cout << "Queue is empty.\n";
            else
                cout << "Front element: " << value << endl;
            break;
        case 4:
            if (q.isEmpty())
                cout << "Queue is empty.\n";
            else
                cout << "Queue is not empty.\n";
            break;
        case 0:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}