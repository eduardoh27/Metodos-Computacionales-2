#include <iostream>
using namespace std;

class Triangle
{
public:
    float a = 5;
    float b = 4;
    float c = 3;

    float perimeter(){
        return a + b + c;
    }

};

int main()
{
    Triangle mytriangle;
    Triangle* ptrMytriangle = &mytriangle;
    cout << mytriangle.a << endl;
    cout << ptrMytriangle->a << endl;
    cout << ptrMytriangle->perimeter() << endl;
    //cout << ptrMytriangle.a << endl;
     
    return 0;
}