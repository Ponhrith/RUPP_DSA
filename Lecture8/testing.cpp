#include <iostream>
#include <queue>
using namespace std;

queue<int> myQueue;

queue<int> waitingQueue;
queue<int> retainedQueue;
queue<int> preAppointmentQueue;
queue<int> notRespondedQueue;

void assign_token() {
    if (myQueue.empty()) {
        cout << "Queue is empty!" << endl;
        return;
    }

    int token = myQueue.front();
    myQueue.pop();
    cout << "Ticket " << token << " options:" << endl;
    cout << "1. Ticket waiting" << endl;
    cout << "2. Ticket retained" << endl;
    cout << "3. Ticket Pre-appointment" << endl;
    cout << "4. Ticket not responded" << endl;
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
    if (waitingQueue.empty()) {
        cout << "None";
    }
    else {
        queue<int> tempWaitingQueue = waitingQueue;
        while (!tempWaitingQueue.empty()) {
            cout << tempWaitingQueue.front() << " ";
            tempWaitingQueue.pop();
        }
    }
    cout << endl;

    cout << "Token retained: ";
    if (retainedQueue.empty()) {
        cout << "None";
    }
    else {
        queue<int> tempRetainedQueue = retainedQueue;
        while (!tempRetainedQueue.empty()) {
            cout << tempRetainedQueue.front() << " ";
            tempRetainedQueue.pop();
        }
    }
    cout << endl;

    cout << "Token Pre-appointment: ";
    if (preAppointmentQueue.empty()) {
        cout << "None";
    }
    else {
        queue<int> tempPreAppointmentQueue = preAppointmentQueue;
        while (!tempPreAppointmentQueue.empty()) {
            cout << tempPreAppointmentQueue.front() << " ";
            tempPreAppointmentQueue.pop();
        }
    }
    cout << endl;

    cout << "Token not responded: ";
    if (notRespondedQueue.empty()) {
        cout << "None";
    }
    else {
        queue<int> tempNotRespondedQueue = notRespondedQueue;
        while (!tempNotRespondedQueue.empty()) {
            cout << tempNotRespondedQueue.front() << " ";
            tempNotRespondedQueue.pop();
        }
    }
    cout << endl;
}

void display_queue() {
    if (myQueue.empty()) {
        cout << "Queue is empty!" << endl;
        return;
    }

    cout << "Queue: ";
    queue<int> tempQueue = myQueue;

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
    while (!waitingQueue.empty()) {
        waitingQueue.pop();
    }
    while (!retainedQueue.empty()) {
        retainedQueue.pop();
    }
    while (!preAppointmentQueue.empty()) {
        preAppointmentQueue.pop();
    }
    while (!notRespondedQueue.empty()) {
        notRespondedQueue.pop();
    }
}

int main() {
    // Pre-defined some patients
    for (int i = 101; i <= 122; i++) {
        myQueue.push(i);
    };

    int opt;
    while (opt != 6) {
        cout << "Welcome to Patients Management System: \n1. Add patients to queue system\n2. Change the patients' status\n3. Display the patients' status\n4. Display the patients in the queue\n5. Clear the queue\n6. Quit the system\n";
        //cout << "--->";
        cin >> opt;

        switch (opt) {
            case 1:
                myQueue.push(myQueue.back() + 1);
                cout << "Number " << myQueue.back() << " has been added to the queue.\n\n";
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
                cout << "The queue has been cleared.\n\n";
                break;
            case 6:
                cout << "Done!\n";
                break;
            default:
                cout << "Invalid choice\n";
                break;
        }
    }
    return 0;
}
