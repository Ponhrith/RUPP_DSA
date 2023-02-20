#include <iostream>
using namespace std;

int main()
{
    // int i,z;
    //int &dell = NULL;//doesn't work


   // int i = 0;///works
   // int &dei = i;


   //int &ref = i;
   //int &ref = z;//doesn't work cause it can initurlize only a variable


   //int &ref = i;
  // int &ref = &i + 4;// doesn't work

 // int x = 1;
  //int *pZ = &x;
  //int **ppZ = &pZ;// work

  // int &ref = x;
  // int &&ref = ref;// doen't work

  int x = 7, y = 10;
    int &ref4 = k;
    ref4 = y;
     
    cout << x << endl;
    cout << ref4 << endl;
    cout << y << endl;

    x = 15,y = 20;

    cout << x << endl;
    cout << ref4 << endl;
    cout << y << endl;

}