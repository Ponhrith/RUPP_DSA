#include <iostream>
#include <vector>
using namespace std;

class ArrayIns
{
    public:
        vector<double> v; // vector declaration
        int nElems = 0; // variable declaration

        ArrayIns(int max) // constructor
        {
            v.resize(max); // resize vector v
        }
        
        void insert(double value) // insert method
        {
            v[nElems] = value; //vector at current index equal to the input value
            nElems++; // increment index by 1
        }
};

// show function to show every elements in the vector
void show(vector<double> v)
{
    for(auto &print: v)
    {
        cout << print << " ";
    }
}

void Insertion_Sort(vector<double> v, int size)
{
    char menu;

    // loop to ask user the continuation of the program
    while(true){
        // menu for how the user want the array to be sorted
        cout << "\n\nMenu\n";
        cout << "a) Ascending\n";
        cout << "b) Descending\n";
        cout << "c) Exit\n\n";
        cout << "Select: ";
        cin >> menu;

        switch(tolower(menu))
        {
            // if user select 'a' then the array will be sorted in ascending order
            case 'a':
                // loop through the array for sorting
                for(int i = 0, j; i < size; i++)
                {
                    // mark the current index
                    int mark = v[i];
                    /* loop to check if the current index is bigger than the 0 and 
                    the last index is bigger than the the current index
                    then the current index will swap with the last index*/
                    for(j = i; j > 0 && v[j - 1] > mark; j--)
                    {
                        v[j] = v[j - 1];
                    }
                    v[j] = mark;
                }
                break;
            // if user select 'b' then the array will be sorted in descending order
            case 'b':
                for(int i = 0, j; i < size; i++)
                {
                    // mark the current index
                    int mark = v[i];
                    /* loop to check if the current index is bigger than the 0 and 
                    the last index is smaller than the the current index
                    then the current index will swap with the last index*/
                    for(j = i; j > 0 && v[j - 1] < mark; j--)
                    {
                        v[j] = v[j - 1];
                    }
                    v[j] = mark;
                }
                break;
            case 'c':
                // end program if user select 'c'
                cout << "Exit Program.";
                exit(0);
        
            default:
                // print error message if user don't select from the options
                cout << "Error";
                break;
        }     

        if(menu == 'a' || menu == 'b'){              
            // print the array
            show(v);
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
    
    // insertion sort function
    Insertion_Sort(arr.v, size);

    return 0;
}