#include<iostream>
using namespace std;


int recurfact(int dum)
{
    if (dum == 0)
        return 1;
    else
        return dum*recurfact(dum-1);
    
}

int fact(int num)
{
    int sum = 1;
    for (int i = 1; i <= num; ++i) {
        sum *= i;
    }
    cout << "Loop Factorial " << num << " is " << sum << std::endl;
    return sum;
}


int main() {
    cout << "Recursive Factorial: " << recurfact(5) << std::endl; 
    fact(5);

    
}