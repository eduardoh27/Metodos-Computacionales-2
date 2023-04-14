#include <iostream>
using namespace std;

int main()
{
    int* ptrScore = new int(5);
    cout << *ptrScore << endl;
    cout << ptrScore << endl;
    
    delete ptrScore;
 
    return 0;
}