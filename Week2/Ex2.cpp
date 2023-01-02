#include <iostream>
using namespace std;
void Factorial(int a)
{
    int factorial = 1;
  
    while (a > 0 )
    {
        factorial *= a;
        
        cout << a;
        if(a != 1)
        {
            cout << " x ";
        } 
        a--;      
    }
    cout << " = " << factorial;

}

int main()
{
    int a;
    cout << "Input number: ";
    cin >> a;
    Factorial(a);

    return 0;
}