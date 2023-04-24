#include<iostream>
using namespace std;

int fact(int num)
{
    int sum = 1;
    for (int i = 1; i <= num; ++i) {
        sum *= i;
    }
    cout << "Factorial of " << num << " is " << sum << std::endl;
    return sum;
}



int main() {
    fact(5);
    
}