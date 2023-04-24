#include <iostream>
#include <queue>
using namespace std;


queue<int> myQueue;

queue<int> waitingQueue;
queue<int> retainedQueue;
queue<int> preAppointmentQueue;
queue<int> notRespondedQueue;

void assign_token() {
    int token = myQueue.front();
    myQueue.pop();
    cout << "Token " << token << " options:" << endl;
    cout << "1. Token waiting" << endl;
    cout << "2. Token retained" << endl;
    cout << "3. Token Pre-appointment" << endl;
    cout << "4. Token not responded" << endl;
    int choice;
    cin >> choice;
    switch (choice) {
        case 1:
            waitingQueue.push(token);
            break;
        case 2:
            retainedQueue.push(token);
            break;
        case 3:
            preAppointmentQueue.push(token);
            break;
        case 4:
            notRespondedQueue.push(token);
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
}

void display_token() {
    cout << "Token waiting: ";
    cout << "Queue: ";

    queue<int> tempWaitingQueue;
    queue<int> tempRetainedQueue;
    queue<int> tempPreAppointmentQueue;
    queue<int> tempNotRespondedQueue;
    tempWaitingQueue = waitingQueue;
    tempRetainedQueue = retainedQueue;
    tempPreAppointmentQueue = preAppointmentQueue;
    tempNotRespondedQueue = notRespondedQueue;

    while (!tempWaitingQueue.empty()) {
        cout << tempWaitingQueue.front() << " ";
        tempWaitingQueue.pop();
    }
    cout << endl;

    cout << "Token retained: ";
    while (!tempRetainedQueue.empty()) {
        cout << tempRetainedQueue.front() << " ";
        tempRetainedQueue.pop();
    }
    cout << endl;

    cout << "Token Pre-appointment: ";
    while (!tempPreAppointmentQueue.empty()) {
        cout << tempPreAppointmentQueue.front() << " ";
        tempPreAppointmentQueue.pop();
    }
    cout << endl;

    cout << "Token not responded: ";
    while (!tempNotRespondedQueue.empty()) {
        cout << tempNotRespondedQueue.front() << " ";
        tempNotRespondedQueue.pop();
    }
    cout << endl;
}
void display_queue() {
    cout << "Queue: ";
    queue<int> tempQueue;
    tempQueue = myQueue;

    while (!tempQueue.empty()) {
        cout << tempQueue.front() << " ";
        tempQueue.pop();
    }
    cout << endl;

}
void clear_queue() {
    while (!myQueue.empty()) {
        myQueue.pop();
    }
}

int main() {

    // pre-defined some patients
    for (int i = 101; i <= 122; i++) {
        myQueue.push(i);
    };

    int opt;

    while (opt != 6) {
        cout << "Option: \n1. Add to Queue\n2. Change a Queue's status\n3. Display Token\n4. Display Queue\n5. Clear Queue\n6. Quit\n";
        cout << "--->";
        cin >> opt;

        switch (opt) {
            case 1:
                myQueue.push(myQueue.back()+1);
                cout << "Number " << myQueue.back() << " has been added Queue\n\n";
                break;
            case 2:
                assign_token();
                break;
            case 3: 
                display_token();
                break;
            case 4: 
                display_queue();
                break;
            case 5:
                clear_queue();
                break;
            case 6:
                break;
        }
    }
    return 0;
}