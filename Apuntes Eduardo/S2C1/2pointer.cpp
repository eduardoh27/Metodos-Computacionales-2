#include <iostream>
using namespace std;

int main()
{
    int score = 5;
    int *scorePtr;
    scorePtr = &score;

    cout << &score << endl;
    cout << scorePtr << endl;

    return 0;
}