#include <iostream>
#include <queue>

using namespace std;

queue<int> patientQueue;
queue<int> waitingQueue;
queue<int> seenQueue;
queue<int> notRespondingQueue;

void change_status() {
    int patientNumber = patientQueue.front();
    patientQueue.pop();
    cout << "Patient " << patientNumber << " options:" << endl;
    cout << "1. Waiting" << endl;
    cout << "2. Seen" << endl;
    cout << "3. Not Responding" << endl;
    int choice;
    cin >> choice;
    switch (choice) {
        case 1:
            waitingQueue.push(patientNumber);
            break;
        case 2:
            seenQueue.push(patientNumber);
            break;
        case 3:
            notRespondingQueue.push(patientNumber);
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
}

void display_status(queue<int> q, string label) {
    cout << label << ": ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

void display_queue() {
    cout << "Patient queue: ";
    queue<int> tempQueue;
    tempQueue = patientQueue;

    while (!tempQueue.empty()) {
        cout << tempQueue.front() << " ";
        tempQueue.pop();
    }
    cout << endl;
}

void clear_queue() {
    while (!patientQueue.empty()) {
        patientQueue.pop();
    }
}

int main() {

    // pre-defined some patients
    for (int i = 1; i <= 10; i++) {
        patientQueue.push(i);
    };

    int opt;

    while (opt != 5) {
        cout << "Option: \n1. Add patient\n2. Change patient status\n3. Display status\n4. Display queue\n5. Quit\n";
        cout << "--->";
        cin >> opt;

        switch (opt) {
            case 1:
                patientQueue.push(patientQueue.back()+1);
                cout << "Patient " << patientQueue.back() << " has been added to the queue\n\n";
                break;
            case 2:
                change_status();
                break;
            case 3: 
                display_status(waitingQueue, "Waiting");
                display_status(seenQueue, "Seen");
                display_status(notRespondingQueue, "Not Responding");
                break;
            case 4: 
                display_queue();
                break;
            case 5:
                break;
            default:
                cout << "Invalid option" << endl;
                break;
        }
    }
    return 0;
}