#include <iostream>
using namespace std;


void display_array(int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}

void insert_data(int arr[], int newData, int pos)
{
    int i;
    int n = sizeof(arr)/sizeof(arr[0]);
    for (i=n; i>pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[i] = newData;
    n++;
}

int main(){
    system("cls");
    int my_arr [] = {3,2,6,4,7};
    int arr_size = sizeof(my_arr)/sizeof(my_arr[0]);
    cout<<"The current element in my array is: ";
    display_array(my_arr, arr_size);

    int newEle = 10;
    int pos = 3;
    insert_data(my_arr, newEle, pos);

    cout<<"The current element after add"<< newEle <<"to position"<< pos <<" :";
    display_array(my_arr, arr_size);
    cout<<endl;
    return 0;
}