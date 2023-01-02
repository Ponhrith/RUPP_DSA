#include<iostream>
using namespace std;
int main()
{
    int numOne, numTwo, max_two;
    cout<<"Enter the Two Numbers: ";
    cin>>numOne>>numTwo;
    if(numOne>numTwo)
        max_two = numOne;
    else
       max_two = numTwo;
    cout<<"\nMaximum = "<<max_two;
    cout<<endl;
    return 0;
}