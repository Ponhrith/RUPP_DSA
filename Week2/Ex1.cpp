// #include<iostream>
// using namespace std;
// int main()
// {
//     int numOne, numTwo, max_two;
//     cout<<"Enter the Two Numbers: ";
//     cin>>numOne>>numTwo;
//     if(numOne>numTwo)
//         max_two = numOne;
//     else
//        max_two = numTwo;
//     cout<<"\nMaximum = "<<max_two;
//     cout<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;

int max_two(int x, int y){

    if(x > y){
        return x;
    }
    else{
        return y;
    }
}

int main(){
    int x, y;
    
    cout << "Enter 2 intergers: ";
    cin >> x >> y;

    cout << "The biggest number is: " << max_two(x, y);
    return 0;
}