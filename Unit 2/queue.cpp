#include<iostream>
#define MAX 5
using namespace std;

int front = -1, rear = -1;
int queue[MAX];

void enque(int num) {
    if(rear == MAX - 1) cout << "\nQueue overflow" << endl;
    else {
        if(front == -1 && rear == -1) front = rear = 0;
        else rear ++;
        queue[rear] = num;
        cout << "\nThe element : " << queue[rear] << " added in queue" << endl;
    }
}

void dequeu() {
    if(front < 0 || front > MAX - 1) cout << "\nQueue underflow" << endl;
    else {
        cout << "\nelement : " << queue[front] << " is dequeue from queue" << endl;
        front++;
    }
}

void peek() {
    if(front < 0 || front > MAX - 1) cout << "\nQueue underflow" << endl;
    else cout << "\nPeek : " << queue[front] << " " << endl;
}

void display() {
    if(front < 0 || front > MAX - 1) cout << "\nQueue underflow" << endl;
    else if(front == rear + 1) cout << "\nQueue Underflow" << endl;
    else {
        for(int i = front; i <= rear; i ++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice = 0, num = 0;
    do {
        cout << "\n1) enque " << endl;
        cout << "2) deque " << endl;
        cout << "3) peek " << endl;
        cout << "4) display " << endl;
        cout << "5) exit " << endl;

        cout << "\nEnter choice : ";
        cin >> choice;

        switch(choice) {
            case 1:
            cout << "\nEnter element : ";
            cin >> num;
            enque(num);
            break;

            case 2:
            dequeu();
            break;

            case 3:
            peek();
            break;

            case 4:
            display();
            break;

            case 5:
            cout << "\nExit good bye" << endl;
            break;
                
                default:
                cout << "\nInvalid choice try again " << endl;
                break;

        }
    } while(choice != 5);
}