#include <iostream>

class Student {
    
    private:
        int age;
    public:
        Student() {
            std::cout << "hey\n";
            age = 24;
        }
};
// las clases deben tener ; al final

int main() {
    Student mario;
    return 0;
}
