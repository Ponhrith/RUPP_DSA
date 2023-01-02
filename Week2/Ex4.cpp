#include <iostream>
using namespace std;

class myFriend
{
    public:
    string name;
    string date_of_birth ;
    string place_of_birth, department;

    myFriend(string n, string dob,string pob, string dp)
    {
        name = n;
        date_of_birth = dob;
        place_of_birth = pob;
        department = dp;
    }
    void display()
    {
        cout << "name: " << name << endl;
        cout << "date of birth: " << date_of_birth << endl;
        cout << "place of birth: " << place_of_birth << endl;
        cout << "Department: " << department << endl << endl;
    }
};

int main()
{
    myFriend mengseu("Tai Mengseu","5/6/1653","phnom penh , cambodia","IT");
    myFriend ponhrith("Nhep Ponhrith","3/9/1955","phnom penh, cambodia","IT");
    myFriend visal("Deap Visal","3/7/1899","phnom penh, cambodia","IT");
    myFriend meng("Tek LyMeng","0/0/0001","phnom penh, cambodia","IT");
    myFriend heng("Tek LyHeng","5/8/6452","phnom penh, cambodia","IT");
    int a; 
    string name;
    while(true)
    {
        cout << "choose: ";
        cin >> a;

        if(a == 1)
        {
        mengseu.display();
        ponhrith.display();
        visal.display();
        meng.display();
        heng.display();
        }

        else if (a == 2)
        {
            cout << "Enter name: ";
            cin >> name;
            if(name == "mengseu" )
            {
                mengseu.display();
            }
            else if(name == "ponhrith")
            {
                ponhrith.display();
            }
            else if (name == "visal")
            {
                visal.display();
            }
            else if (name == "meng")
            {
                meng.display();
            }
            else if(name == "heng")
            {
                heng.display();
            }
            else
            {
                break;
            }
        
        
        }
        else
        {
            break;
        }
}
}