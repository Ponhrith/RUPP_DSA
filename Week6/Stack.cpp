// #include <iostream>
// #include <vector>
// using namespace std;

// class pennies{       
//     public:
//         vector<int> v;
//         int index = -1;
  

//     void push(int num){
//         v[++index] = num; 
//     }
        
        
// };

// int main(){

//     int index = -1;
//     pennies coin;

//     while(true){
//         int i;
//         cout << "Enter coin you want to stack: ";
//         cin >> i;
//         coin.push(i);
        
     
//     }

//     return 0;
// }

#include <iostream>
#include <algorithm>
#include <vector>

class pennies{

};

void print(int arr[], size_t n)
{
  for (size_t i = 0; i < n; ++i) std::cout << ' ' << arr[i];
  std::cout << '\n';
}

int main()
{
  // 10 is my optimistic assumption to be sufficient large.
  int arr[10] = { 1, 3, 5, 4, 2 };
  // remember that 5 elements are in use initially
  size_t n = 5;
  // show array
  print(arr, n);
  // use address of elements where iterators are required e.g. in std::sort
  std::sort(&arr[0], &arr[n]);
  // show sorted array
  print(arr, n);
  
  // how to apply something like std::vector::push_back()
  arr[n++] = -1;
  arr[n++] = 10;
  arr[n++] = 7;
  // show array again
  print(arr, n);
  // use address of elements where iterators are required (alternative form)
  std::sort(arr, arr + n);
  // show sorted array again
  print(arr, n);
}