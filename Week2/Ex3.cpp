#include<iostream>
using namespace std;

class classBox{
private:
    float width;
    float length;
    float height; 

public:
    classBox(float w = 1.0, float l = 1.0, float h = 1.0 ){
        width = w;
        length = l;
        height = h;
    } 
    float getWidth(){
        return width;
    }
    float getLength(){
        return length;
    }
    float getHeight(){
        return height;
    }
    float getVolume(){
        return width*length*height;
    }
};

int main(){
    classBox boxObj1(3,4,5);
    cout << "Width=" << boxObj1.getWidth() << " " << "Length=" << boxObj1.getLength() << " " << "Height=" << boxObj1.getHeight() << endl;
    cout << "Volume=" << boxObj1.getVolume() << endl;
    
}