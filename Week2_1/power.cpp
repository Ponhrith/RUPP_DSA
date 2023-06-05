#include<iostream>
using namespace std;


int recursepower(int a, int n)
{
    if (n == 0) {
        return 1;
    } else if (n > 0) {
        return a * recursepower(a, n - 1);
    } else {
        return 1 / (a * recursepower(a, -n - 1));
    }
}

int main(){
    cout << "The result from recursive function: " << recursepower(3, 3) << std::endl;
}