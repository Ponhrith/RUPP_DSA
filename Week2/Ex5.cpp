#include<iostream>
using namespace std;

class informRUPP{
private:
    int numFaculty;
    string nameFaculty;
    string feDepartment; 

public:
    informRUPP(int num = 1, string feName ="Faculty of Engineering", string nameDep = "ITE" ){
        numFaculty = num;
        nameFaculty = feName;
        feDepartment = nameDep;
    }

    int getNum(){
        return numFaculty;
    }

    string getFacName(){
        return nameFaculty;
    }
    
    string getNameDep(){
        return feDepartment;
    }
}; 

// class feDepartment : informRUPP{
// private:
//     string nameDepartment;
// public:
//     feDepartment(string nameDep = "ITE"){
//         nameDepartment = nameDep;
//     }

// };