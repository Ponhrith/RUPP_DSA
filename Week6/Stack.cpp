#include <iostream>
#include <vector>
using namespace std;

class cafeteriaTrays{
        vector<string> myCafeteriaTrays;
public:
    	cafeteriaTrays(vector<string> newMyCafetriaTrays) {
	    myCafeteriaTrays = newMyCafetriaTrays;
	}
	
	void print() {
		for (int i = 0; i < myCafeteriaTrays.size(); i++)
			cout << myCafeteriaTrays[i] << " ";
	}
	
};

int main(){
    vector<string> food;

    food.push_back("Hot Dog");
    food.push_back("Burger");
    food.push_back("Sandwich");
    food.push_back("Chicken");
    food.pop_back();
    // food.size();


    cafeteriaTrays vect(food);
    vect.print();
}


