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
        qfront = 0;
        rear = 0;
    }


    bool isEmpty() {
        if(qfront == rear) {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data) {
        if(rear == size)
            cout << "Queue is Full" << endl;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(qfront == rear) {
            return -1;
        }
        else
        {	int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront==rear){
                qfront = 0;
                rear = 0;
            }
         return ans;
        }
    }

    int front() {
        if(qfront == rear) {
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