#include <iostream>
using namespace std;

int main()
{
    int a = 13;
    int b = 27;

    cout << a  << " "<< b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << a << " " << b << endl;

    return 0;
}