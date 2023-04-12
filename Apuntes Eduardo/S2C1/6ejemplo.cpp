#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptrA = &a;
    
    cout << a << endl;
    cout << &a << endl;
    cout << ptrA << endl;
    cout << *ptrA << endl;

    return 0;
}