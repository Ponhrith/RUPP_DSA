#include <iostream>
#include <queue>
using namespace std;

queue<int> Queue;
queue<int> Waiting;
queue<int> Retained;
queue<int> Pre_Appointment;
queue<int> Not_Responded;

void Token_State() {
    int token = Queue.front();
    Queue.pop();
    cout << "Token " << token << " options:" << endl;
    cout << "1. Tokens Waiting" << endl;
    cout << "2. Token Retained" << endl;
    cout << "3. Pre-appointment" << endl;
    cout << "4. Tokens not responded" << endl;
    int choice;
    cin >> choice;
    switch (choice) {
        case 1:
            Waiting.push(token);
            break;
        caseW2:
            Retained.push(token);
            break;
        case 3:
            Pre_Appointment.push(token);
            break;
        case 4:
            Not_Responded.push(token);
            break;
        default:
            cout << "\nInvalid input" << endl;
            break;
    }
}

void DisplayToken() {
    
    cout << "Queue: ";
    queue<int> temp;
    
    cout << "Tokens Waiting: ";
    temp = Waiting;
    while (!temp.empty()){
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
    
    temp = Retained;
    cout << "Tokens Retained: ";
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
    
    temp = Pre_Appointment;
    cout << "Pre-appointment: ";
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
    
    temp = Not_Responded;
    cout << "Token not responded: ";
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
}
void DisplayQueue() {
    cout << "Queue: ";
    queue<int> temp;
    temp = Queue;

    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

}
void Clear() {
    while (!Queue.empty()) {
        Queue.pop();
    }
}

int main() {

    // pre-defined patients
    for (int i = 101; i <= 122; i++) {
        Queue.push(i);
    };

    int menu;

    while (true) {
        cout << "Menu:";
        cout << "\n1. Add to Queue";
        cout << "\n2. Change a Queue's status";
        cout << "\n3. Display Token State";
        cout << "\n4. Display Queue";
        cout << "\n5. Clear";
        cout << "\n6. Exit";
        cout << "Select: ";
        cin >> menu;

        switch (menu) {
            case 1:
                Queue.push(Queue.back()+1);
                cout << "Token " << Queue.back() << " has been add to Queue.\n\n";
                break;
            case 2:
                Token_State();
                break;
            case 3: 
                DisplayToken();
                break;
            case 4: 
                DisplayQueue();
                break;
            case 5:
                Clear();
                break;
            case 6:
                exit(0);
                break;
            default:
                cout << "\nInvalid Input.";
        }
    }
    return 0;
}