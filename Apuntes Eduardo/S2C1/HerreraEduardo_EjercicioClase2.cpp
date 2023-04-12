#include <iostream>
using namespace std;

void cycle(int* ptrA, int* ptrB, int* ptrC, int* ptrD, string direction)
{
    int temp;

    if (direction == "Right") {
        
        temp = *ptrD;

        *ptrD = *ptrC;
        *ptrC = *ptrB;
        *ptrB = *ptrA;
        *ptrA = temp;
    }

    else { // caso izquierda

        temp = *ptrA;

        *ptrA = *ptrB;
        *ptrB = *ptrC;
        *ptrC = *ptrD;
        *ptrD = temp;
    }

}

int main()
{   
    int a = 2, b = 3, c = 4, d = 6; 
    
    // entrada
    cin >> a >> b >> c >> d;

    cout << "Initial Numbers" << endl;
    cout << a << " " <<  b << " " << c << " " << d << endl;
    
    cout << "One cycle to the Right" << endl;
    // hacer ciclo
    cycle(&a, &b, &c, &d, "Right");
    cout << a << " " <<  b << " " << c << " " << d << endl;
    
    cout << "Two cycles to the Left" << endl;
    // hacer 2 ciclos
    cycle(&a, &b, &c, &d, "Left");
    cycle(&a, &b, &c, &d, "Left");
    cout << a << " " <<  b << " " << c << " " << d << endl;
    
    cout << "Adresses:" << endl;
    cout << &a << " " <<  &b << " " << &c << " " << &d << endl;
    
    return 0;
}