#include <iostream>
using namespace std;


void myFuncValue(int x){
    x = 100;
}

void myFuncRef(int *x){
    *x = 100;
}

int main()
{
    int var = 20;
    cout << var << endl;

    myFuncValue(var);
    cout << var << endl;
    
    myFuncRef(&var);
    cout << var << endl;
    
    return 0;
}