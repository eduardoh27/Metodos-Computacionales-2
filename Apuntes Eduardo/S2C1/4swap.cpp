#include <iostream>
using namespace std;



void swap(int *ptrA, int *ptrB)
{
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

int main()
{
    int a = 13;
    int b = 27;

    cout << a  << " "<< b << endl;

    swap(&a, &b);

    cout << a << " " << b << endl;

    return 0;
}