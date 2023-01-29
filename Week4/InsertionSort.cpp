#include <iostream>
#include <vector>
using namespace std;

class ArrayIns
{
    public:
        vector<double> v; // vector declaration
        int nElems; // variable declaration

        ArrayIns(int max) : nElems(0) // constructor 
        {
            v.resize(max); // resize vector v
        }
        
        void insert(double value) // insert method 
        {
            v[nElems] = value; //vector at current index equal to the input value
            nElems++; // increment index by 1
        }
};

void Insertion_Sort(vector<double> v, int size)
{
    char menu;
    
    // menu for how the user want the array to be sorted
    cout << "\n\nMenu\n";
    cout << "a) Ascending\n";
    cout << "b) Descending\n\n";
    cout << "Select: ";
    cin >> menu;

    // loop through the array for sorting
    for(int i = 0, j; i < size; i++)
    {   
        // mark the current index
        int mark = v[i];

        switch(tolower(menu))
        {
            // if user select 'a' then the array will be sorted in ascending order
            case 'a':

                /* loop to check if the current index is bigger than the 0 and 
                the last index is bigger than the the current index
                then the current index will swap with the last index*/
                for(j = i; j > 0 && v[j - 1] > mark; j--)
                {
                    v[j] = v[j - 1];
                }
                break;

            // if user select 'b' then the array will be sorted in descending order
            case 'b':

                /* loop to check if the current index is bigger than the 0 and 
                the last index is smaller than the the current index
                then the current index will swap with the last index*/
                for(j = i; j > 0 && v[j - 1] < mark; j--)
                {
                    v[j] = v[j - 1];
                }
                break;
        }
        v[j] = mark;
    }

    // print error message if user don't select from the menu
    if(tolower(menu) != 'a' && tolower(menu) != 'b')
    {         
        cout << "Error, Please select one of the option";
    }
    else
    {
        // print the array
        for(int i = 0; i < size; i++)
        {
            cout << v[i] << " ";
        }
    }
}

int main()
{

    int size;
    double elem;

    // get size of array from user
    cout << "\nEnter size for the array: ";
    cin >> size;
    ArrayIns arr(size);
    
    // get elements from user
    cout << "Enter element you want to store: ";
    for(int i = 0; i < size; i++)
    {
        cin >> elem;
        arr.insert(elem);
    }

    Insertion_Sort(arr.v, size);

    // loop to ask user the continuation of the program
    while(true)
    {
        char menu;
        cout << "\n\nExit Program?(y/n): ";
        cin >> menu;

        switch(tolower(menu))
        {
            case 'y':

                // end program if user select 'y'
                exit(0);
                break;
            case 'n':

                // continue program if user select 'n'
                Insertion_Sort(arr.v, size);
                break;
            default:

                // print error message if user don't select from the options
                cout << "Error";
                
        }
    }
    return 0;
}